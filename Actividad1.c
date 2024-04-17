#include <stdio.h>
int primero=0, segundo=0, aux=0;
void pregunta();
void cambio(int *point_primero, int *point_segundo);

void main()
{
	int *point_primero = &primero, *point_segundo = &segundo;
	pregunta();
	cambio(&primero, &segundo);
	printf("Valor inicial a final de la primera variable: %d - %d\n", segundo, primero);
	printf("Valor inicial a final de la segunda variable: %d - %d", primero, segundo);
}

void pregunta()
{
	printf("Ingrese el valor de la primera variable: ");
	scanf("%d", & primero);
	printf("Ingrese el valor de la segunda variable: ");
	scanf("%d", & segundo);
}

void cambio(int *point_primero, int *point_segundo)
{
	aux=*point_primero;
	*point_primero=*point_segundo;
	*point_segundo=aux;
}
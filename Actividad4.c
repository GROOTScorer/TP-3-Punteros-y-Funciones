#include <stdio.h>

int vector1[100], vector2[100], i=0, numero=0;
void ingresar();
void copia(int *vector1, int *vector2, int numero);

main()
{
    ingresar();
    copia(vector1, vector2, numero);
    printf("Los elementos del segundo arreglo son: ");
    for(i=0;i<numero;i++)
    {
        printf("%d ", vector2[i]);
    }
}

void ingresar()
{
    printf("Cuantos elementos hay en el primer arreglo?: ");
    scanf("%d", & numero);
    for(i=0;i<numero;i++)
    {
        printf("Ingrese el valor %d del vector: ", i+1);
        scanf("%d", & vector1[i]);
    }
}

void copia(int *vector1, int *vector2, int numero)
{
    int i;
    for(i=0;i<numero;i++)
    {
        *(vector2 + i)=*(vector1 + i);
    }
}

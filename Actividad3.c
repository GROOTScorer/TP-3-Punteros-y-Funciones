#include <stdio.h>

int vector[100], numero=0, max=0, min=0;
void pregunta();
void max_min(int *vector, int numero, int *max, int *min);

int main() {
    pregunta();
    max_min(vector, numero, &max, &min);
    printf("El maximo es %d y el minimo es %d.\n", max, min);
    return 0;
}

void pregunta() {
    int i;
    printf("Cuantos numeros va a ingresar?: ");
    scanf("%d", & numero);

    for(i=0; i<numero; i++) {
        printf("Ingrese el valor %d del vector: ", i+1);
        scanf("%d", & *(vector + i));
    }
}

void max_min(int *vector, int numero, int *max, int *min) {
    int i;
    *max = *min = *vector;

    for(i=0; i<numero; i++) {
        if(*(vector + i) > *max) {
            *max = *(vector + i);
        }

        if(*(vector + i) < *min) {
            *min = *(vector + i);
        }
    }
}

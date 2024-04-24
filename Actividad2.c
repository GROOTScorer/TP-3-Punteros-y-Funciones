#include <stdio.h>

int suma, vector[100], i=0, numero=0;
float promedio;
void pregunta();
void suma_promedio(int *vector, int n, int *suma, float *promedio);

int main() {
    pregunta();
    suma_promedio(vector, numero, &suma, &promedio);
    printf("La suma da %d, y el promedio da %f.\n", suma, promedio);
    return 0;
}

void pregunta() {
    printf("Cuantos numeros en el arreglo?: ");
    scanf("%d", & numero);

    for(i=0; i<numero; i++) {
        printf("Ingrese el valor %d del arreglo: ", i+1);
        scanf("%d", & vector[i]);
    }
}

void suma_promedio(int *vector, int numero, int *suma, float *promedio) {
    *suma = 0;
    for(i = 0; i < numero; i++) {
        *suma += *(vector + i);
    }
    *promedio = (float)*suma / numero;
}

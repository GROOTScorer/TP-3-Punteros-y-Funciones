#include <stdio.h>
#include <stdlib.h>

char string1[50];
char string2[50];
void pregunta();
void concatenar(char* string1, char* string2);

main()
{
    pregunta();
	concatenar(string1, string2);
	printf("String concatenado: %s", string1);
}

void pregunta() {
    printf("Ingrese el primer string: ");
    fgets(string1, 50, stdin);
    printf("Ingrese el segundo string: ");
    fgets(string2, 50, stdin);
}

void concatenar(char* string1, char* string2)
{
	while (*string1) {
		++string1;
	}
	string1 -= 1;
	while (*string2) {
		*string1++ = *string2++;
	}
	*string1 = '\0';
}

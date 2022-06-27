#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *p1;
	char *p2;
	float A = -2.9876535;
	char B = 'X';
	P1 = &A;
	P2 = &B;
	printf("\nTamanio puntero a float: %hd\n", sizeof(p1));
	printf("Tamanio puntero a char: %hd\n\n", sizeof(p2));
	printf("Tamanio del float: %hd\n", sizeof(A));
	printf("Tamanio del char: %hd\n\n", sizeof(B));
	printf("Contenido de lo apuntado por p1: %f y contenido del float %f\n", *p1,A);
	printf("Contenido de lo apuntado por p2: %c y contenido del char %c\n\n", *p2,B);
	return 0;
}
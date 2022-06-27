#include <stdio.h>
#include <string.h>

struct datos {
	
	char nombre[22];
	char apellido[22];


};

int main(){

	struct datos alumno1;
	struct datos alumno2;


	strcpy(alumno1.nombre,"Juan Carlos");
	strcpy(alumno1.apellido,"Albatros");


	printf("Nombre: %s",alumno1.nombre);
	printf("Apellido: %s",alumno1.apellido);

	printf("\nIngrese Nombre: ");
	scanf("%s",alumno2.nombre);
	printf("\nIngrese Apellido: ");
	scanf("%s",alumno2.apellido);

	printf("Nombre: %s",alumno2.nombre);
	printf("Apellido: %s",alumno2.apellido);

return 0;	



}





















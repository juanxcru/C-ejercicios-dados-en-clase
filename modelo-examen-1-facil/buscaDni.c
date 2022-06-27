#include "funciones.h"
#include "headers.h"
#include "structs.h"


void buscarDni (struct datos usuarios[],short cantRegistrada){
    int i=0;
    char dniIn[8+1];
    printf("Ingrese DNI a buscar: ");
    scanf("%s",dniIn);

    while(i<cantRegistrada && strcmp(usuarios[i].dni,dniIn)!=0){
        i++;
    }
    if(i == cantRegistrada){
        printf("Usuario no registrado\n");
        return;
    }else
    {
        printf("Nombre : %s \nApellido: %s \nUsername: %s\n",usuarios[i].nombre,usuarios[i].apellido,usuarios[i].user.userName);
    }
   return;



}

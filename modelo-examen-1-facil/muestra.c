#include "funciones.h"
#include "headers.h"
#include "structs.h"


void mostrarDatos(struct datos usuarios[], short cant){

    for(int i = 0; i<cant ; i++) {
        printf("Nombre: %s\n",usuarios[i].nombre);
        printf("Apellido: %s\n",usuarios[i].apellido);;
        printf("DNI: %s\n",usuarios[i].dni);
        printf("Edad: %hd\n",usuarios[i].edad);
        printf("User Name: %s\n",usuarios[i].user.userName);
        printf("Password: %s\n",usuarios[i].user.userPwd);
        printf("------------------------------\n");

    }

}

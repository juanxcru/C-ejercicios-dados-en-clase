#include "funciones.h"
#include "headers.h"
#include "structs.h"

short ingresarDatos(struct datos usuarios[],short cantRegistrada){

    if(cantRegistrada == CANT){
        system("cls");
        printf("----- Limite de Usuarios Alcanzado --------\n");
        system("pause");
        return cantRegistrada;
    }

        printf("Ingrese Nombre: \n");
        scanf("%s",&usuarios[cantRegistrada].nombre);

        printf("Ingrese Apellido: \n");
        scanf("%s",&usuarios[cantRegistrada].apellido);

        printf("Ingrese DNI: \n");
        scanf("%s",&usuarios[cantRegistrada].dni);
        if(existeDNI(usuarios,cantRegistrada)){
            printf("Presione una tecla para volver al menu");
            while(!kbhit());
            return cantRegistrada;
        }


        printf("Ingrese edad: \n");
        scanf("%hd",&usuarios[cantRegistrada].edad);
        system("cls");

        do{
        printf("Ingrese User Name: \n");
        scanf("%s",&usuarios[cantRegistrada].user.userName);
        }while(existeUserName(usuarios,cantRegistrada));
        printf("Ingrese Password:  \n");
        do{
            ocultaIngresoPass(usuarios,cantRegistrada);
        }while(verificarPass_8ch(usuarios[cantRegistrada].user.userPwd));

        cantRegistrada++;

        system("cls");
        return cantRegistrada;
}

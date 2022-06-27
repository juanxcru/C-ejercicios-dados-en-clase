#include "funciones.h"
#include "headers.h"
#include "structs.h"

short menuImprimir(){

    short opcion=0;

    printf("Ingrese\n#1- Para crear Usuario\n#2- Para buscar\n#3- Para salir\n#4- Login Admin \n");
    scanf("%hd",&opcion);
    fflush(stdin);

    return opcion;


}

short menuFunciones(struct datos usuarios[], short opcion, short cantRegistrada){


    switch(opcion){

        case 1 :
        {
            system("cls");
            cantRegistrada = ingresarDatos(usuarios,cantRegistrada);
            break;
        }


        case 2:
            system("cls");
            buscarDni(usuarios,cantRegistrada);
            system("pause");

            break;

        case 3:
        {
            system("cls");
            printf("Fin del progama\n");
            system("pause");
            break;
        }

        case 4:
        {
            system("cls");
            loguearAdmin(usuarios);

            mostrarDatos(usuarios,cantRegistrada);

            system("pause");
            break;
        }
        default:
        {
            system("cls");
            printf("Opcion incorrecta\n");
            system("pause");
            //break;
        }



    }
system("cls");
return cantRegistrada;
}

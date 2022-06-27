#include "headers.h"
#include "structs.h"
#include "funciones.h"




int main (){

    struct datos usuarios[CANT];
    short cantRegistrada = 2; // Cantidad de usuarios hardcodeados
    short opcion=0;

    hardcodeaDatos(usuarios);

    do{
        opcion = menuImprimir();
        cantRegistrada = menuFunciones(usuarios,opcion,cantRegistrada);
    }while(opcion !=3);

return 0;

}

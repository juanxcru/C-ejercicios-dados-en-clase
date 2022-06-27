
#include "funciones.h"
#include "headers.h"
#include "structs.h"


void hardcodeaDatos(struct datos usuarios[]){

    strcpy(usuarios[0].nombre,"Juan");
    strcpy(usuarios[0].apellido,"Garcia");
    strcpy(usuarios[0].dni,"20123321");
    usuarios[0].edad = 30;
    strcpy(usuarios[0].user.userName,"JuanGar10");
    strcpy(usuarios[0].user.userPwd,"hola42!Asd");

    strcpy(usuarios[1].nombre,"Mario");
    strcpy(usuarios[1].apellido,"Casas");
    strcpy(usuarios[1].dni,"22324543");
    usuarios[1].edad = 39;
    strcpy(usuarios[1].user.userName,"Casitamari");
    strcpy(usuarios[1].user.userPwd,"hola42!Sda");

    return;

}

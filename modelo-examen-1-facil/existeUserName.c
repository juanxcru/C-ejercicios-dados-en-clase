#include "funciones.h"
#include "headers.h"
#include "structs.h"

bool existeUserName (struct datos usuarios[],short cantRegistrada){

    for(int i=0; i<cantRegistrada;i++){
       if(!strcmp(usuarios[cantRegistrada].user.userName,usuarios[i].user.userName)){
        printf("El UserName ya esta registrado\n");
        return 1;
       }
    }
    return 0;
}

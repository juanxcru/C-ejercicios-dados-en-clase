
#include "funciones.h"
#include "headers.h"
#include "structs.h"

bool existeDNI (struct datos usuarios[],short cantRegistrada){

    for(int i=0; i<cantRegistrada;i++){
       if(!strcmp(usuarios[cantRegistrada].dni,usuarios[i].dni)){
        printf("El DNI ya esta registrado\n");
        return 1;
       }
       }
    return 0;
}

#include "funciones.h"
#include "headers.h"
#include "structs.h"


void ocultaIngresoPass(struct datos usuarios[], short cantRegistrada){

    short posicionPantalla=0;
    char ch;
    while(1){
        ch = getch();
        if (ch == 13){ // ascii de enter
        printf("\n");
        usuarios[cantRegistrada].user.userPwd[posicionPantalla] = '\0';
        break;
        }
        else if(ch == 8){ // si borramos
            if(posicionPantalla > 0){
                posicionPantalla--;
                usuarios[cantRegistrada].user.userPwd[posicionPantalla]='\0';
                printf("\b \b"); // dos back spaces: uno para volver, otro para borrar
            }

        }
        else if (posicionPantalla<20){
            usuarios[cantRegistrada].user.userPwd[posicionPantalla] =  ch;
            posicionPantalla++;
            printf("*");
            }

        }

}

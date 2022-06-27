#include "funciones.h"
#include "headers.h"
#include "structs.h"

bool verificarPass_8ch(char pass[]){

    short mayus=0,minus=0,cant,simbolo=0,num=0,i=0;

    cant = (short)strlen(pass);

    if(cant<8){
        printf("----------PASSWORD INVALIDA------------\n");
        printf("Reingrese Password: ");
        return 1;
    }
    while(i<cant){

        if(pass[i]>='a' && pass[i]<='z'){
            minus++;
        }
        else if(pass[i]>='A' && pass[i]<='Z'){
            mayus++;
        }
        else if(pass[i]>='0' && pass[i]<='9'){
            num++;
        }
        else{
            simbolo++;
        }
        i++;
    }

    if(mayus != 0 && minus != 0 && num != 0 && simbolo!= 0)
        return 0; // OK
    else{
        printf("----------PASSWORD INVALIDA------------\n");
        printf("Reingrese Password: ");
        return 1; //error
    }


}

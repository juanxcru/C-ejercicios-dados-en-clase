
#include "funciones.h"
#include "headers.h"
#include "structs.h"

void loguearAdmin (struct datos usuarios[]){

    char userNameIn[20+1];
	char userPwdIn[20+1];
    do{
        printf("Ingrese Usuario: ");
        scanf("%s",userNameIn);

        printf("Ingrese Password: ");
        scanf("%s",userPwdIn);
    }while(strcmp(userNameIn,usuarios[2].user.userName)!= 0 || strcmp(userPwdIn,usuarios[2].user.userPwd) != 0);

    system("cls");
return;

}

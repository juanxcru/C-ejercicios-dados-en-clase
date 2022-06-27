#include <stdio.h>


/*Ingresar una palabra y mostrar cuantos caracteres tiene*/

int main()
{
    char caa[20];
    int i=0;

    scanf("%s",cadena);

    for(i=0;i<20 && cadena[i]!='\0'; i++);

    printf("\nLa cantidad de caracteres ingresados es: %d",i);

    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    int cantCaracteres = 0;
    int p=0;
    int u=0;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", cadena);

    printf("\nLa cadena de caracter ingresado es: %s\n", cadena);

    for(int i=0; i<50 && cadena[i] != '\0'; i++){

        cantCaracteres++;
    }



    for( p=0,u=(cantCaracteres-1)  ; (p<u) && (cadena[p]==cadena[u]) ; p++ ,u--);



    if(p>=u)
    {
        printf("1\n "); // palindromo
    }
    else
    {
        printf("0\n "); // no es palindromo
    }


    return 0;
}

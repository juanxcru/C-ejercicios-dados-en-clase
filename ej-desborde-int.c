#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//declaraciones de los prototipos
int suma( int ,int );
bool validarSuma( int ,int ,int);


int main()
{
    int v=0;
    int v1=-3;
    int v2=0;
    bool verif=0;
    v=suma(v1,v2);
    printf("el valor de la suma es: %d \n",v);
    verif=validarSuma(v1,v2,v);
    if(!verif)
    {
    printf("el resultado es incorrecto \n");    
    }else
    {
    printf("el resultado es correcto \n");        
    }
    
    printf("El programa llego a su fin\n");
    
    return(0);
}

//definiciones de las funciones
int suma( int v1,int v2)
{
    return(v1+v2);
}

bool validarSuma( int v1,int v2,int resu)
{   
    if(v1 == 0 && v2 == 0 && resu == 0){
        return(1); suma OK
    }
    else if(v1>=0 && v2>=0 && resu<=0 )
    {
        return(0);// suma no OK
    }else if(v1<=0 && v2<=0 && resu>=0)
    {
        return(0);//suma no OK
    }
    else
    {
        return(1);//suma OK
    }
}

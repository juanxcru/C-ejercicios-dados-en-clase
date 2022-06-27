#include <stdio.h>
#include <string.h>
#define N 5


// Prototipos de funcion
int funcionInt(int,int);            
char funcionChar(char,char,int);
void funcionVoid(char[],char);

int main (){

    int parametroInt1=314, parametroInt2=1516, resu;
    char parametroChar1='a', parametroChar2='A';
    char array1[N] = "Hola"; 

    printf("%p\n",array1[0]);
    printf("\n%s",array1);

    funcionVoid(array1,parametroChar2);

    printf("\n%s",array1);

    /*printf("\nMain: ");
    printf(" %p,",parametroInt1);
    printf(" %p\n",parametroInt2);
    resu = funcionInt(parametroInt1,parametroInt2);

    printf("\n%d",resu);
*/
    
return 0;    
}

int funcionInt(int unInt,int otroInt){

    printf("\n%d,%d",unInt,otroInt);
    
    scanf("%d",&unInt);
    scanf("%d",&otroInt);

    printf("\nFuncion: ");
    printf(" %p,",unInt);
    printf(" %p",otroInt);


    return unInt+otroInt;


}       

void funcionVoid(char unArray[],char otroChar ){
    
    printf("\n %p\n",unArray[0]);
    unArray[0] = 'J';
    printf("%s,%c",unArray,otroChar);

}


/*


*/





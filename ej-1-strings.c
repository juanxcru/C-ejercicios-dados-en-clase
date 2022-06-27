int main()
{
    char cad1[20];
    char cad2[20];
    int cant1, cant2;
    short resu = 0;

    printf("Ingrese la primera palabra: ");
    scanf("%s",cad1);
    printf("\nIngrese la segunda palabra: ");
    scanf("%s",cad2);

    for(cant1=0; cant1<20 && cad1[cant1]!='\0'; cant1++);
    for(cant2=0; cant2<20 && cad2[cant2]!='\0'; cant2++);

    printf("\nlargo cadena 1 : %d",cant1);
    printf("\nlargo cadena 2 : %d",cant2);


    for(int i=0; cad1[i]!='\0' && cad2[i]!='\0'; i++)
    {
        if(cad1[i]<cad2[i] || cad1[i]>cad2[i])
        {
            resu=1;
            break;
        }

    }
        if(cant1>cant2 || cant2>cant1)
        {
        resu = 1;
        }
    printf("\n%d",resu);

    return 0;


}

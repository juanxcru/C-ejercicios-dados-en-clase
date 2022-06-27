#include<stdio.h>

int main()
{


    //int entera = 0x4A55414E;
    int entera = 0x4E41554A;

    char * pc=0;
    pc=&entera;
    printf("dir: %p %d %x %c\n",pc,(*pc),(*pc),(*pc));

    pc++;
    printf("dir: %p %d %x %c\n",pc,(*pc),(*pc),(*pc));

    pc++;
    printf("dir: %p %d %x %c\n",pc,(*pc),(*pc),(*pc));

    pc++;
    printf("dir: %p %d %x %c\n",pc,(*pc),(*pc),(*pc));

}

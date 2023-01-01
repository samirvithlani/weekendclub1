#include<stdio.h>


void main(){


    char name[20]="royal";
    char *name1;
    name1 = &name;
    printf("\n ...........value of name1 = %s",name1);
///    name1 = name;
    printf("\n name = %s",name);

    printf("\n name = %u",&name);
    printf("\n name[0] = %u",&name[0]);
    printf("\n name[1] = %u",&name[1]);
    printf("\n name[2] = %u",&name[2]);
    printf("\n name[2] = %u",&name[3]);
    printf("\n name[2] = %u",&name[4]);






}

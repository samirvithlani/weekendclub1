#include<stdio.h>

void main(){

    char name[30];
    char name1[30]="hello ";

    printf("\n enter name");
    gets(name);

    strcat(name1,name);

    int len = strlen(name);
    printf("\n len of name = %d",len);

    printf("\n name = %s",name1);


}

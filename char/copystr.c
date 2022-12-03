#include<stdio.h>

void main(){

    char name[30]="samir",tempname[30];

    for(int i=0;name[i]!='\0';i++){

        tempname[i] = name[i];
    }

    printf("\n copied name = %s",tempname);







}

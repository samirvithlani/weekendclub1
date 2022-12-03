#include<stdio.h>

void main(){

    //"royal'\0'"
    char name[30];
    int count=0;
    printf("\n enter your name:");
    ///scanf("%s",name);
    gets(name);
    printf("\n name = %s",name);
    for(int i=0;name[i]!='\0';i++){

        printf("\n index = %c",name[i]);
        if(name[i]==' '){
            count++;
        }

    }
    printf("\n space count = %d",count);
    printf("\n word count = %d",count+1);


}

#include<stdio.h>

void main(){

    char name[30];
    int count=0;
    printf("\n enter name");
    gets(name);

    ///samir
    for(int i=0;name[i]!='\0';i++){
    ///0 name[0]
        /// i 0
        printf("\n i = %c",name[i]);
        count++;
    }
    printf("\n no of char = %d",count);


}

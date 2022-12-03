#include<stdio.h>

///samir
///Samir
void main(){

    char name[30],name2[30];
    int flag=0;
    printf("\n enter name");
    gets(name);
    printf("\n enter name2");
    gets(name2);


    for(int i=0;name[i]!='\0';i++){

        if(name[i]!=name2[i]){

            flag=1;
            break;

        }

    }

    if(flag==0){

        printf("\n both string are same");

    }
    else{

        printf("\n both string are not same");
    }



}

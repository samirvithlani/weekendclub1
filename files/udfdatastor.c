#include<stdio.h>

void main(){

    char name[30],email[30],password[30];
    int id;

    printf("\n Enter your name: ");
    gets(name);
    _flushall();
    printf("\n Enter your email: ");
    gets(email);
    _flushall();
    printf("\n Enter your password: ");
    gets(password);
    _flushall();
    printf("\n Enter your id: ");
    scanf("%d",&id);
    _flushall();

    FILE *fp;
    fp = fopen("user.txt","a");
    if(fp == NULL){
        printf("File not found");
        return;
    }
    else{
        fprintf(fp,"%s %s %s %d",name,email,password,id);
        fclose(fp);
    }




    

}
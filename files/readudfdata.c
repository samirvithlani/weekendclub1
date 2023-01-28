#include<stdio.h>

void main(){

    char name[30],email[30],password[30];
    int id;

    FILE *fp;
    fp = fopen("user.txt","r");
    if(fp==NULL){
        printf("File not found");
    }
    else{
        while((fscanf(fp,"%s %s %s %d",name,email,password,&id)!=EOF)){
            
            
        }
    }
    printf("\n name = %s",name);
    printf("\n email = %s",email);
    printf("\n password = %s",password);
    printf("\n id = %d",id);





}
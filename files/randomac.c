#include<stdio.h>

void main(){

    char str[100];
    FILE *fp;
    char c;
    fp = fopen("random.txt","r");
    if(fp == NULL){
        printf("File not found");
        return;
    }
    else{

        //fseek(fp,5,5);
        //move cursor to 5th position from start
        fseek(fp,5,SEEK_SET);
        //read char to  char data
        while((c= fgetc(fp))!=EOF){
            printf("%c",c);
        }

        // while((fscanf(fp,"%s",str))!=EOF){
        //     printf("%s",str);
        // }
        

    }
    // fprintf(fp,"This is a random text file");
    // fclose(fp);

}


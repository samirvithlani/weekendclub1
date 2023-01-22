#include<stdio.h>

void main(){

    FILE *fp;
    fp = fopen("C:\\Users\\Samir\\Desktop\\desk\.txt","r");
    if(fp==NULL){
        printf("File not found");
        
    }
    char str[1000];
    int count=0;
    while(fscanf(fp,"%s",str)!=EOF){
        count++;
        printf("%s",str);
    }

    printf("\n count = %d",count);



}
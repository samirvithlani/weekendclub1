#include<stdio.h>

//file database..
// data persistence :to store data permanently in form of files or database it is called data persistence
// open /read/write close
//modes --> r,w,a,r+,w+,a+
void main(){

            FILE *fp;
            //write
            //absolute path
            //fp = fopen("C:\\Users\\Samir\\Desktop\\test.txt","a");
            //path relative path
            fp = fopen("../../test3.txt","a");
            if(fp==NULL){
                printf("File not found");
                
            }
            fprintf(fp,"\n hello world");
            fclose(fp);
            


}
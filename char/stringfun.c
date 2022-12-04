#include<stdio.h>
#include<string.h>

void main(){

    char name[30],tempname[30];
    int flag;
    printf("\n enter name");
    gets(name);
    printf("\n enter tempname");
    gets(tempname);
    flag = strcmp(name,tempname);

    strrev(name);
    printf("\n reverse string =%s",name);

    //upper case
    strupr(name);
    printf("\n after upper case name= %s",name);
    strlwr(tempname);
    printf("\n after lower case.. tempname = %s",tempname);ra

    if(flag==0){

        printf("\n both string are same");
    }
    else{
        printf("\n both string are not same...");
    }

    strcpy(tempname,name);

    printf("\n copied name =%s ",tempname);





}

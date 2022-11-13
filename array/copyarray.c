#include<stdio.h>

void main(){

     int a[10],no,flag=0,index,b[10];


    for(int i=0;i<5;i++){

        printf("\n enter element :");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){

        b[i] = a[i];
    }
    for(int i=0;i<5;i++){

        printf("\n i = %d",b[i]);
    }

}

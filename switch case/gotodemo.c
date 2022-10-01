#include<stdio.h>
#include<stdlib.h>

void main(){

    int pin = 1234,upin,count=0;
    start:
    printf("\n please enter UPI PIn");
    scanf("%d",&upin);

    if(upin == pin){

        printf("\n transcation successful.....");
    }
    else{

        count++;
        printf("\n transcation failed.....");
        if(count>=3){
            printf("\n your failed count exceed !!");
            exit(0);
        }
        ///printf("\n failed count = %d",count);
        goto start;
    }



}

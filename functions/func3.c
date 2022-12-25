#include<stdio.h>
///with return type with argument

int sum(int a,int b){

    int c = a + b;

    return c;
    ///return a + b;

}


void main(){


    ///scnaf
    int ans = sum(100,200);
    printf("\n ans = %d",ans);

}

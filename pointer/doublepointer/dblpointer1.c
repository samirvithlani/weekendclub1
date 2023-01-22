#include<stdio.h>

void main(){

    int a = 10;
    int *p;
    int **q;

    //copy address of a to p
    p = &a;
    //copy address of p to q
    q = &p;

    printf("\n value of a = %d",a);
    printf("\n value of p = %d",*p);
    printf("\n value of q = %d",**q);


}
#include<stdio.h>

void main(){


    int x = 6;
    int n = 6;

    int *p1,*p2;


    p1 = &x;
    p2 = &n;
    printf("\n beofpre sub p1 = %u ,p2 = %u",p1,p2);

    p1 = p1 - p2;
    printf("\n before after add of x = %u",p1);


}

#include<stdio.h>
///int a = 100 <- address
///int a = 100

void main(){

    int a =10,b=20;
    int *p;

    p = &a;
    printf("\n address of a = %u",&a);
    printf("\n value of p =%d",*p);
    printf("\n add of p    =%u",&p);
    printf("\n add of p coiped from a of p =%u",p);
    ///scanf("%d",&a)
    ///4 bytes
    ///printf("\n address of a = %u",&a);
    ///printf("\n address of a = %u",&b);


}

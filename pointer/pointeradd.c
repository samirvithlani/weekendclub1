#include<stdio.h>

void main(){


    int no = 5;
    int *p1,*p2;

    p1 = &no;
    p2 = &no;

    printf("\n before addp2 =%u",p2);

    p2 = p2 - 1;
    printf("\n after add p2 =%u",p2);


}

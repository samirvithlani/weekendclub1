
#include<stdio.h>

///local variable...
void swap(int *a,int *b){
    /// 16 20

    int temp;
    printf("\n inside swap before swapping value of a = %d",*a); ///16
    printf("\n inside swap before swapping value of b = %d",*b); ///20


    temp =*a;
    *a = *b;
    *b = temp;

    printf("\n inside swap after swapping value of a = %d",*a); ///16 20
    printf("\n inside swap after swapping value of b = %d",*b); ///20 10

}

void main(){

    int no1 = 10,no2 = 20;

    printf("\n inside main before swapping value of a = %d",no1); /// 10 , 16
    printf("\n inside main before swapping value of b = %d",no2); ///20 , 20
    swap(&no1,&no2);
    /// 16 20

    printf("\n inside main after swapping value of a = %d",no1);///16 20
    printf("\n inside main after swapping value of b = %d",no2);///20 10

    ///call by reference

}


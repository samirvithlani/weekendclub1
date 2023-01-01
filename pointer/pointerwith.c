
#include<stdio.h>

///local variable...
void swap(int a,int b){
    ///add = 26  30
    ///10 , 20

    int temp;
    printf("\n inside swap before swapping value of a = %d",a); ///10  26
    printf("\n inside swap before swapping value of b = %d",b); ///20  30

    temp =a;
    a = b;
    b = temp;

    printf("\n inside swap after swapping value of a = %d",a); ///20 26
    printf("\n inside swap after swapping value of b = %d",b); ///10 30

}

void main(){

    int no1 = 10,no2 = 20;

    printf("\n inside main before swapping value of a = %d",no1); ///10 16
    printf("\n inside main before swapping value of b = %d",no2); ///20 20
    swap(no1,no2);

    printf("\n inside main after swapping value of a = %d",no1); ///10 16
    printf("\n inside main after swapping value of b = %d",no2); /// 20 20

    ///call by value

}


#include<stdio.h>

///address 124 125
/// 124 10 125 20
void swap(int *no1,int *no2){

        int temp;
        printf("\n value of no1 in swap  before swap function called = %d",*no1); ///10 124
        printf("\n value of no2 in swap  before swap function called = %d",*no2) ;///20 125

        temp = *no1;
        *no1 = *no2;
        *no2=temp;

        printf("\n value of no1 in swap  after swap function called = %d",*no1); ///20 124
        printf("\n value of no2 in swap  after swap function called = %d",no2); ///10 125

}


void main(){

        ///124  // 125
        int no1 = 10,no2 = 20;
        printf("\n value of no1 in main  before swap function called = %d",no1); ///10 124
        printf("\n value of no2 in main  before swap function called = %d",no2); ///20 125

        ///value
        swap(&no1,&no2);

        printf("\n value of no1 in main  after swap function called = %d",no1); ///20 124
        printf("\n value of no2 in main  after swap function called = %d",no2); ///10 125



}
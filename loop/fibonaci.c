

#include<stdio.h>



/// 0 1  1  2  3 5  8
void main(){

    int a=0,b=1,sum=0,temp=0;
    printf("%d %d",a,b);

    for(int i=1;i<=8;i++){

        //sum 1 + 1

        ///1 + 2
        sum = a + b;
        printf(" %d ",sum); // 0 1 1 2 3 5
        ///a =1
        ///a =1
        ///a = 2
        a = b;
        ///b = 1
        ///b = 2
        ///b = 3
        b = sum;


    }




}

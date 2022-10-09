#include<stdio.h>

///123 1  + 2 + =6
///7895 7 + 8 + 9 +5


void main(){


    int no=456,count=0,rem=1,sum=0;

    while(no!=0){

        ///123 % 10 3
        ///12 % 10 2
        ///1
        rem = no %10;
        ///0 = 0 + 3 =3
        ///3 = 3 +2 =5
        ///5 = 5 +1= 6



        sum = sum + rem;
        /// 123 / 10
        ///1
        no = no / 10;

    }

    printf("\n sum = %d",sum);


}

/// 2 type loops
/// entry control loop     exit control loop
/// for loop, while loop     do while loop
/// starting condition end condtion for
/// 1 to 100
/// 1 while
/// exit

#include<stdio.h>

void main(){

    int i,sum=0;

    /// i =1 intilization part
    /// i<=10 condition part
    /// i++ increment decrement part
    for(i=1;i<=10;i++){

            //0 = 0 + 1 = sum =1
            //1 = 1 + 2 = sum =3
            //3 = 3 + 3 =sum =6
            //6 = 6 + 4  sum =10
            //10 = 10 + 5  15
            //15 = 15 + 6 =21
            //21 = 21 + 7  28
            //28 = 28 +8 =36
            //36 = 36 + 9 45
            //45 = 45  +10 55

            sum = sum + i;

                printf("\n i =%d",i);



    }

    printf("\n sum = %d",sum);





}

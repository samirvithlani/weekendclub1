/// 153
/// 1 + 5 + 3 1 + 125 + 27 153

#include<stdio.h>

void main(){

    int no =153,sum=0,rem=0;
    int temp;
    temp =no;
    while(no!=0){

        // 153 % 10 3
        ///15 5
        ///
        rem = no % 10;
        // 0 = 0 +27 =sum 27
        ///   27 = 27 + 125  152
        /// 152 = 152 + 153
        sum = sum+(rem*rem*rem);
        ///153 / 10 15
        /// 1
        no = no /10;


    }

    if(sum==temp){

        printf("\n aramstrong no");
    }
    else{

            printf("\n not");
    }



}

#include<stdio.h>


///785 =3
/// 1999 = 4
void main(){

    int no,rem;
    printf("\n enter no to find digit :");
    scanf("%d",&no);

    /// 123 % 10   =

    int count =0;
    while(no!=0){
        //1 2 3 4
        count++;
        ///7895
        ///  7895 % 10 =5
        ///789 % 10 = 9
        ///78 % 10 8 7
        rem = no %10;
        /// 7895 = 7895 /10 789
        /// 789 /10 78
        ///78 / 10 7
        ///7 / 10 0
        no = no / 10;

    }

    printf("\n digits = %d",count);
}

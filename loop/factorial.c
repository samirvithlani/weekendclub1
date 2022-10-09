#include<stdio.h>

void main(){


    int no,fact=1;
    printf("\n enter no ");
    scanf("%d",&no);

    /// 5 * 4 3 * 2 1  120
    /// 1 2 3 4 5

    /// 5
    ///1 1<=5 true
    ////2<=5 true
    ///3 <= trye
    ///4 True
    ///5 true
    for(int i=1;i<=no;i++){

        //1 = 1 *1  =1
        //1 = 1 * 2 = 2
        //2 = 2*3 = 6
        ///6 = 6 * 4  24
        ///24 = 24 *5 = 120
        fact = fact * i;
    }

    printf("\n fac = %d",fact);






}

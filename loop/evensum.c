#include<stdio.h>

void main(){

    int rem,no,sum=0;
    printf("\n enter no");
    scanf("%d",&no);



    while(no!=0){

        ///1234
        ///123
        ///12
        rem = no % 10;
        ///4 3 2
        if(rem %2 ==0){
                //4 + 2
            sum = sum+rem;
        }
        no = no /10;
        ///
    }



    printf("\n sum of evn = %d",sum);


}

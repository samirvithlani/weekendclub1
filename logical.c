///&& || !

#include<stdio.h>

/// even  < 50
/// if(no % 2 ==0 || no >50)
/*
    every condition must sat....
    if(no % 2 ==0 && no >50)

        T   T    T
        F   -    F
        T   F    F

        any condition
    if(no % 2 ==0 && no >50)

        T   -   T
        F   F   F
        F   T   T
*/

void main(){

    int no;

    printf("\n enter no");
    scanf("%d",&no);

    if(no %2 ==0 && no >=50 && no %3 ==0){


        printf("\n  TRUE");
    }
    else{

        printf("\n FALSE");
    }



}


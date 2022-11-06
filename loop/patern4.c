#include<stdio.h>

void main(){


//1
//2
//3
    for(int i=1;i<=5;i++){


        //4 3 2 1
        //4 3 2
        // 4 3
        for(int k=4;k>=i;k--){
            printf(" ");
        }

        //1 1 2
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        //    *
        //   * *
        //  * * *
        // * * * *
        //* * * * *
    }

}

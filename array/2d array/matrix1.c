#include<stdio.h>

void main(){


    int a[3][3],sum=0;

    printf("\n enter elements of an array");
    ///0
    for(int i=0;i<3;i++){

        ///0 1 2
        for(int j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){

        ///0 1 2
        /// 1 2 3 4 5 6 7 8 9
        for(int j=0;j<3;j++){

            printf(" %d",a[i][j]);
            ///0 = 0 + 1 =1
            ///1 = 1 +2 3
            sum = sum + a[i][j];
        }
        printf("  sum =%d",sum);
        printf("\n");
        sum=0;
    }

}

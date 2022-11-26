#include<stdio.h>

void main(){


    int a[3][3],row=0,col=0;

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];

    ///12 45 78 96 79 ...
    ///12
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            ///12 > 12
             ///45 >12 max
             ///78 > 45
            if(a[i][j]>max){

                max = a[i][j];
                row=i;
                col =j;

                ///index =
            }
        }

    }
    printf("\n max = %d",max);
    printf("\n row = %d col = %d",row+1,col+1);


}

//sorting...

#include<stdio.h>
//bubble sort
/// 10 elements  --> a[10]
///even no even[10]
/// odd [10]
void main(){

    int a[10];
    int temp;

    for(int i=0;i<5;i++){

        printf("\n enter element of an array");
        scanf("%d",&a[i]);
    }
    ///sort

    /// 10 2 45 85 6
    ///2 10 45 85 6
    ///2 6 10 45 85

    ///i=0,i=1,i=2,i=3,i=4
    for(int i=0;i<5;i++){
            ///i =10

        /// j=1,j =2,j=3,j=4
        for(int j=i+1;j<5;j++){
/// 10 2 45 78 6
///a[j][2]= 2
///a[i][0] = 2

            if(a[i]>a[j]){
                temp = a[i]; ///temp 10
                a[i]=a[j];  ///a[0] =2
                a[j] = temp; ///a[1] =10    2 10 45 85 6

            }

        }
    }

    for(int i=0;i<5;i++){


        printf("\n i =%d",a[i]);
    }




}

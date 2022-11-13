#include<stdio.h>

void main(){

    //int a[10]={10,20,45,78,90};
    int a[10],sum=0,max=0;

    for(int i=0;i<5;i++){

        printf("\n enter elemet :");
        scanf("%d",&a[i]);

    }
    //10 20 1 45 78 6  <--> 78
    //max = 10
    max =a[0];

    for(int i=0;i<5;i++){

        ///10 > 10
        //20 > 10 true
        ///a > 20 false
        ///45 > 20 true
        ///78>45 trye
        /// 6 >78 false
        if(a[i]<max){

            ///20,45,78
            max  = a[i];
        }

    }


    printf("\n max = %d",max);

}





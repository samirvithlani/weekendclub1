#include<stdio.h>

void main(){

    //int a[10]={10,20,45,78,90};
    int a[10],sum=0;
    /*
    a[0]=100;
    a[1]=200;
    a[2]=780;
    a[3]=850;
    a[4]=12;
    */
    for(int i=0;i<5;i++){

        printf("\n enter elemet :");
        scanf("%d",&a[i]);

    }
    //1 2 3 4 5
    for(int i=0;i<5;i++){

    ///0 = 0 +1 sum =1
    ///1 = 1 + 2 =2
    ///3 = 3+3  =6

    sum  = sum + a[i];
    printf("\n 1st element =%d",a[i]);

    }

    printf("\nsum of an array = %d",sum);


}

#include<stdio.h>

///with return type without argument
int test(){
    return 100;
}
float test1(){
    float per = 45.63;
    return per;
}
long sum(){
    long a = 1000,b=2000;
    return a + b;
}


void main(){

    int x;

    x = test();
    printf("\n x = %d",x);

    float ans = test1();
    printf("\n ans = %f",ans);


    long l = sum();
    printf("\n ans = %ld",l);

}

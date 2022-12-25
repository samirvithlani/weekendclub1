#include<stdio.h>

float getMarks(float a,float b,float c){

    return a + b + c;
}

float findPer(float a,float b,float c){

    float marsktotal = getMarks(a,b,c);

    return marsktotal / 3;
}


void main(){


    ///scanf
    float per = findPer(50,50,50);
    printf("\n per = %f",per);

}

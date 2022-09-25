#include<stdio.h>


void main(){

    int age;
    printf("\n enter age");
    scanf("%d",&age);
    if(age >= 18){

        printf("\n you are eligible for voting...");

        if(age>=21){

                printf("\n you are eligible for Marrige...");
        }
        else{
            printf("\n you are NOT eligible for Marrige...");
        }

    }

    else{
        printf("\n you are NOT eligible for voting...");
        if(age>=5){
            printf("\n You are eligible for schooling..");
        }
        else{
            printf("\n You are  NOt eligible for schooling..");
        }
    }

}



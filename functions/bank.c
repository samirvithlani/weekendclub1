#include<stdio.h>

int withdraw(int totalbal,int withdrawbal){
///10000,1000
    printf("\n withdraw process start:::");
    printf("\n Trans completed ....");
    return totalbal - withdrawbal;
    ///10000 - 1000
    ///9000
}
int deposit(int totalbal,int depositbal){

    printf("\n deposit process start:::");
    printf("\n Trans completed ....");
    return totalbal + depositbal;

}



void main(){

    int choice,totalbal=10000,wamount,damount;

    ///printf("\n Press 1 for open bank ac");
    do{
    printf("\n WELCOME TO ABCD BANK");
    printf("\n Press 1 for withdraw :");
    printf("\n Press 2 for deposit :");
    printf("\n Press 3 FOR EXIT");
    scanf("%d",&choice);

    switch(choice){

    case 1:
            printf("\n enter withdraw amount:");
            scanf("%d",&wamount);
            //1000
            printf("\n before withdraw amount = %d",totalbal);
            ///10000,1000
            totalbal = withdraw(totalbal,wamount); ///9000
            printf("\n after withdraw amount = %d",totalbal);
    break;

    case 2:
            printf("\n enter deposit amount:");
            scanf("%d",&damount);
            //1000
            printf("\n before deposit amount = %d",totalbal);
            ///10000,1000
            totalbal = deposit(totalbal,damount); ///9000
            printf("\n after desposit amount = %d",totalbal);
    break;
    default:
            printf("\n EXIT");
    break;
    }
    }while(choice!=3);



}

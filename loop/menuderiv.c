#include<stdio.h>

void main(){

    int choice;
    do{
    printf("\n enter your choice");
    printf("\n enter 1 for shirt :");
    printf("\n enter 2 for T-shirt :");
    printf("\n 3 for exit :\n");
    scanf("%d",&choice);

    switch(choice){

    case 1:
            printf("\n selecred shirt :");
    break;
    case 2:
            printf("\n selected t shirt");
    break;
    default:
                printf("\n invalid choice try again !");
                //exit(0);
    break;

    } //swicth over

    //do over
    }while(choice!=3);

}

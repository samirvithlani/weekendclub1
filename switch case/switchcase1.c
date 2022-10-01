#include<stdio.h>
// if else --> if T --> F else
//if --> F else if -> F ...  else
//case 1 -->
//50 conditions -->
void main(){

    int choice,goa;
    start:
    printf("\n Enter Your dest... to go..");
    printf("\n Press 1 for Goa");
    printf("\n Press 2 for Udaipur");
    printf("\n Press 3 for Manali");
    printf("\n press 4 for exit..");

    scanf("%d",&choice);

    switch(choice){

    case 1:
            printf("\n Welcome to Goa");
            printf("\n enter your choice :");
            printf("\n press 1 for  Calangute Beach ·");
            printf("\n press 1 for  Baga Beach ·");
            scanf("%d",&goa);

            switch(goa){

            case 1:
                    printf("\n welcome to Calangute Beach");
            break;
            case 2:
                    printf("\n welcome to Baga Beach");
            break;

            }//goa over...

            goto start;
    break;

    case 2:
            printf("\n Welcome to Udaipur");
            goto start;
    break;

    case 3:
            printf("\n Welcome to Manali");
            goto start;
    break;
    case 4:
            printf("\n Thanks welcome again !!");
            exit(0);
    break;

    default:
            printf("\n Please enter valid dest..");
            goto start;
    break;




    }//swicth over..




}

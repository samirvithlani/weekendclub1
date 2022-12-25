#include<stdio.h>
///function

///without return type without argument
void sum(){
    ///local variable...
    int a,b,c=0;
    printf("\n enter value of a");
    scanf("%d",&a);
    printf("\n enter value of b");
    scanf("%d",&b);

    c = a + b;
    printf("\n sum = %d",c);

}
///without return type with argument / param
void sub(int a,int b){

    int c = a -b;
    printf("\n sub = %d",c);

}
void main()
{

    ///sum();
    int no1,no2;
    printf("\n enter a ");
    scanf("%d",&no1);
    printf("\n enter b ");
    scanf("%d",&no2);
    sub(no1,no2);

}

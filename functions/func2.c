#include<stdio.h>

void findlen(char name[30]){

    int count=0;
    for(int i=0;name[i]!='\0';i++){

        count++;
    }
    printf("\n len of %s = %d",name,count);

}
void square(int no){

    int ans = no * no;
    printf("\n square =%d",ans);
}

void pow_base(int pow,int base){

    int ans=1; ///2 5
    ///1
    for(int i=1;i<=pow;i++){

        ///1 = 1 * 2 ans =2
        ///2 = 2 * 2 ans 4
        ///4 = 4 *2 = 8
        ///8 = 8 *2 16

        ans = ans * base;

    }
    printf("\n pow of %d = %d",base,ans);
}


void main(){

    int choice,no;
    printf("\n enter your choice");
    printf("\n enrer 1 for find square");
    printf("\n enter 2 for find power and base");
    printf("\n enter 3 find len");

    scanf("%d",&choice);
    switch(choice){

    case 1:
            printf("\n enter no");
            scanf("%d",&no);

            square(no);
    break;
    case 2:
            pow_base(5,2);
    break;
    case 3:
            findlen("ram");
    break;


    }

}

/// 1)reverse
/// 2) 3 subject  per float

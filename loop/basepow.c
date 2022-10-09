#include<stdio.h>

int main(){

    int base,pow,ans=1;
     //5
    //2   2 * 2 * 2 * 2 *2
    printf("\n enter base");
    scanf("%d",&base);
    printf("\n enter pow");
    scanf("%d",&pow);

    for(int i=1;i<=pow;i++){

        ///1 = 1 * 2 = 2
        ///2 = 2 * 2 =4
        ///4 = 4 *2 8
        ///8 = 8 * 2 16
        ///16 = 16 *2 =32
        ans = ans * base;
    }

    printf("\n ans = %d",ans);




}

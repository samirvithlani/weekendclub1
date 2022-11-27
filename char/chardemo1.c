#include<stdio.h>

void main(){

    ///1 byte
    /// assci values - >
    /// A ->65 ,66 ....
    ///a -> 97 98 ...
    /// 32
    char c='A';
    char flag;
    printf("\n value of c = %d",c);
    printf("\n enter your flag 'Y' for continue and 'N' for stop");
    scanf("%c",&flag);

    ///infinte
    while(1){

        if(flag=='N' || flag =='n'){
                printf("\n thanks..");
            break;
        }
        else{
            printf("\n .....");
            break;
        }

    }





}

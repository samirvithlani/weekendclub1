#include<stdio.h>

void main(){


    int a[10],no,flag=0,index;

    for(int i=0;i<5;i++){

        printf("\n enter element :");
        scanf("%d",&a[i]);
    }

    printf("\n enter any no to search from array");
    scanf("%d",&no);


    /// 12 45 96 365 45   <->45
    //96
    for(int i=0;i<5;i++){
            ///12 == 96 false
            ///45 ==96 false
            /// 96 == 96 true
            /// 365 ==96

        if(a[i]==no){

            flag=1;
            index = i;
            break;
        }

    }

    if(flag==1){

        printf("\n %d is found in array at %d position",no,index+1);
    }
    else{

        printf("\n %d is NOT found in array",no);
    }


}

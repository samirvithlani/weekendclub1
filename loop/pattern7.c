#include<stdio.h>

void main(){

    int flag=0;
    //1
    //2
    //3
    //2
    for(int i=1;i>=1;){

        printf("\n");

        //k 3 space
        //k 2 space
        //k 1 space
        //k 2 space
        //k 3 space
        for(int k=3;k>=i;k--){

            printf(" ");
        }
        //1   1 2
        for(int j=1;j<=i;j++){

            printf("%d ",j);//   1
                            //  1 2
                            // 1 2 3
                            //  1 2
                            //   1
        }
        //i =1 false
        if(i==3){
            flag=1;
        }
        if(flag==0){
            i++; //1+1 =2 +1 3
        }
        else{
            i--; // 3-1 2 1
        }

    }


}

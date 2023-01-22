#include<stdio.h>
#include<stdlib.h>

void main(){

    int n,i,*p,sum=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    
    p =(int*) malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        sum += *(p+i);
    }
    printf("Sum = %d",sum);
    printf("\n n = %d",n);
    printf("\n n = %d",*p);
    free(p);
    if(p==NULL){
        printf("Memory not allocated");
        
    }
   
    


}
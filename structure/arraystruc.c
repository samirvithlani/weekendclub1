#include<stdio.h>
//f1
//f2
//f3

struct Flipkart{
    int id;
    char name[20];
    int sales[7];
};

void addData(){

    struct Flipkart f[3];
    for(int i=0;i<3;i++){

        printf("\n enter id");
        scanf("%d",&f[i].id);
        _flushall();
        printf("\n enter your name");
        gets(f[i].name);
        _flushall();
        printf("\n enter your 7 days sales...");
        for(int s=0;s<7;s++){

            printf("\n enter %d day sales",s+1);
            scanf("%d",&f[i].sales[s]);
            
            //f[0]sales[0]
            //f[0]sales[1]
            //f[0]sales[3]
            //f[0]sales[4]
            //f[0]sales[5]
            //f[0]sales[6]

            //f[1]sales[0]
            //f[1]sales[1]
            //f[1]sales[3]
            //f[1]sales[4]
            //f[1]sales[5]
            //f[1]sales[6]
            
            
        }

    }



}

void printData(){

struct Flipkart f[3];
for(int i=0;i<3;i++){

        printf("name = %s",f[i].name);
        printf("id = %d",f[i].id);
        for(int s=0;s<7;s++){

            printf("\n sales of day %d = %d",s+1,f[i].sales[s]);
        }

    }

}

void main(){

    
    addData();
    printData();


}
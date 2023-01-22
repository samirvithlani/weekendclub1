#include<stdio.h>

struct student{

    int rollno;
    char name[20];

};


void main(){

    struct student s[3];

  for(int i=0;i<3;i++){

    printf("\n enter roll no");
    scanf("%d",&s[i].rollno);
    printf("\n enter name");
    _flushall();
    gets(s[i].name);
  }
  for(int i=0;i<3;i++){

    printf("\n roll no of %s  = %d",s[i].name,s[i].rollno);
  }


}
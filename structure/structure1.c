//array is an group of similar data types
//structure is an group of fifferent data types
#include<stdio.h>

struct employee{

    int empid;
    char empname[20];
    float empsal;

}emp;

struct Company{
    int cid;
    char cname[20];
}cmp;

void main(){

    struct employee emp; 
    //struct Company cmp;
    //emp local variable.... 

    printf("\n enter compnay name");
    gets(cmp.cname);
    _flushall();
    printf("\n Enter employee id : ");
    scanf("%d",&emp.empid);
    _flushall();
    printf("\n enter employee name");
    gets(emp.empname);
    _flushall();
    printf("\n enter employee salary");
    scanf("%f",&emp.empsal);


    printf("\n company name = %s",cmp.cname);
    printf("\n employee id = %d",emp.empid);
    printf("\n employee name = %s",emp.empname);
    printf("\n employee salary = %.2f",emp.empsal);
    

}

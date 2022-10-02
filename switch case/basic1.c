///header file
/// # pre processive include keyword file
/// pre processive directive

///std input output
#include<stdio.h>


void main(){

    ///variables --> are the containers... which hold the value which can varies
    ///Data types
    /// int size = 4 bytes  float-4 double-8 long-8 longdouble-16 unsingint-4 char-1 bool-1
    /// 1 byte = 8 bit
         //4 * 8 -1        31
    /// 2              2
    //-2,147,483,648 to 2,147,483,648
    ///formate specifers int %d, float %f char %c

    /// variable declatration rules

    ///var name must not starts with cap   int A; invalid, int userName;
    ///var name must not starts with number int 1no;   int no1;
    ///var name must not contains space int user name; int user_name
    ///var name must not contains special symbols int *no; int no_1


    int a=100;
    float f = 125.25;
    int no1,no2,ans=0;


    printf("\n a = %d",a);
    printf("\n f = %f",f);

    printf("\n enter no 1");
    ///&access address of no1
    scanf("%d",&no1);
    printf("\n enter no 2");
    scanf("%d",&no2);

    /// operator :operator are special symbol which can help to perform mathmatical operations bw operands
    /// arithmatic opertor : +,-,*,/,%
    /// relational operator : <,>,<=,>=,==
    /// logical operator , &&,||,|
    /// increment decrement operator , ++,--
    /// miselinious operator , ?:

    ans = no1 + no2 ;
    /// - * /
    printf("\n no1 = %d \n no2 =%d",no1,no2);

    printf("\n sum = %d",ans);

    ///bio data -->
    /// cal --> + , - , * ,/



}

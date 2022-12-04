#include<stdio.h>

///A 65 B66 a 97 ... space 32
///copy compare, reverse,palindrome - ->
void main(){

    char name[30];

    printf("\n enter name");
    gets(name);

    ///amit
    ///r 97>=   97 -65  32 A -a 32
    for(int i=0;name[i]!='\0';i++){

        ///a 97
        if(name[i]>=65 && name[i]<=91){
        ///t
            name[i]= name[i]+32;
            ///a = a - 32
            ///97 = 97 - 32 - 65 name[i] = 65[A]
        }

    }

    printf("\n upr case = %s",name);

}


#include<stdio.h>

/// royal
///oyalr
///yalro
///alroy
///lroya
///royal
///layor
void main(){

        char name[30],temp,tempname[30];
        int len=0,i,j,flag=0;

        printf("\n enter name");
        gets(name);
        ///parth

         for(int i=0;name[i]!='\0';i++){

            tempname[i] = name[i];
        }

        for(i=0;name[i]!='\0';i++){

            len++;
        }
        ///5
        ///samir
        j = len-1;
        ///j = 4
        for(i=0;i<len/2;i++,j--){
            /// name [0] = p temp =p
            ///name[1] =a temp =a
            temp = name[i];
            ///name[0]= name[j[4] = h name[i] = h name[0] =h
            ///name[1] = name[j]3 = 3 name[i[1]] = t
            name[i] = name[j];
            ///name[4] = p
            ///name[3] =a
            name[j] = temp;
            ///hartp
            ///htrap

        }

        printf("\n rev name = %s",name);


        for(int i=0;name[i]!='\0';i++){

            if(name[i]!=tempname[i]){
                flag=1;
                break;
            }

        }
        if(flag==0){

            printf("\n name is palindrome");
        }
        else{
            printf("\n name is not palindrome");
        }






}



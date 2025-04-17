/* 1: Write a program to print the address of a variable. Use this address to get the 
value of the variable*/
#include<stdio.h>
int main(){
    int i=8;
    int*j=(&i);
    printf("The address of the variable is:%p\n",j); // address of the variable 

    printf("The value of the variable:%d\n",*(&i)); // extracting value using address

    return 0;
}
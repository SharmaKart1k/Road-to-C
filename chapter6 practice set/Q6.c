/* 6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.*/
#include<stdio.h>
int main(){
    int x=4;
    int*y=(&x);
    int**z=(&y);
    printf("The value of x is:%d\n",x);
    printf("The value of x is:%d\n",*y);
    printf("The value of x is:%d\n",**z);
    return 0;
}
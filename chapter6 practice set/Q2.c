/*2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/
#include<stdio.h>
// function prototype
int variable(int*);
// function definition
int variable(int* ptr){
    printf("the value address of ptr in function is:%d\n",ptr);
    printf("The value at ptr:%d\n",*ptr);
    return 0;
}
int main(){
    int i = 6;
    int*ptr=&i;
    printf("The address of i is:%u\n",ptr);
    variable(ptr);
    return 0;
}
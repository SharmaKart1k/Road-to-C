//  4. Write a function and pass the value by reference
#include<stdio.h>
// function prototype
void pass(int*);
// function definition
void pass(int* y){
    *y=*y*2;
}
int main(){
    int x = 10;
    printf("value in main fn:%d\n",x);
    pass(&x);
    printf("value in pass function:%d\n",x);
    return 0;
}
// 3. Write a program to change the value of a variable to ten times of its current value.
#include<stdio.h>
// function prototype
void change_to_ten_times(int*);
// function definition 
void change_to_ten_times(int* a){
    *a = *a*10;
}
int main(){ 
    int x = 6;
    printf("before changing the value of x: %d\n",x);
    change_to_ten_times(&x);
    printf("after changing the value of x: %d\n",x);
    return 0;
}
/* Problem 3:Write a program to change the value of a variable to ten times of its current
value.
Q7. Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/
#include<stdio.h>
//function prototype
void change_by_ten_times(int);
//function definition
void change_by_ten_times(int x){
    x=x*10;
}
int main(){
    int i=4;
    printf("The value of i is:%d\n",i);
    change_by_ten_times(i);
    printf("The value of i is:%d\n",i);
    return 0;
}
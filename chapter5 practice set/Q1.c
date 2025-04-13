// Write a program to find the average of three numbers?
#include<stdio.h>
// function prototype
float sum(int,int,int);
//  function defination
float sum(int a,int b,int c){
    float avg = (a+b+c)/3.0;
    printf("the average of three number's are: %.2f\n",avg);
    return avg;
}
int main(){
    int a=10;
    int b=20;
    int c=30;
    sum(a,b,c);
    return 0;
}
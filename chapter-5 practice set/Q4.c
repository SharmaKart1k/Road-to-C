// 4. Write a program using recursion to calculate nth element of Fibonacci series.
// a fibonacci series is nothing but just a sum of two previous no
// 0 1 1 2 3 5 8 13 21 34..........This is fibonacci series!
#include<stdio.h>
// function prototype
int fib(int);
// function definition
// formula-----> fib(n-1) + fib(n-2)
int fib(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n; // this 
    printf("enter nth:");
    scanf("%d",&n);
    printf("the fibonacci no at %dth no is: %d",n,fib(n));
    return 0;
}
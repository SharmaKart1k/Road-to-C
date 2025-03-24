// 1. Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
    // make table using for loop by taking user input
    int n;
    printf("Table of: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("%d x  %d = %d\n",n,i,i*n);
    }
    return 0;
}
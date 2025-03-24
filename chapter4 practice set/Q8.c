// Q8.Write a program to calculate the factorial of a given number using a for loop:
#include<stdio.h>
int main(){
    int n;int fact=1;
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
        
    }printf("The factorial of %d is %d",n,fact);
    return 0;
}
// *= this operator updates the vaalue and restore after every loop cycle
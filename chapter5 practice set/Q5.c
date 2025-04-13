// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>
// function prototype
int sum_natural(int);
// funtion definition
int sum_natural(int n){
    if(n==1){
        return 1;
    }
return sum_natural(n-1)+n;
}
int main(){
   int n;
   printf("enter no to get its sum: ");
   scanf("%d",&n);
   printf("the sum of the first n natural no is:%d\n",sum_natural(n));
   return 0;
}
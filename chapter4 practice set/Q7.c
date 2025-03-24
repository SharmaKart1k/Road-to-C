// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10)
#include<stdio.h>
int main(){
    int n=8;
    int sum=0; // it will store total sum
    for(int i=1;i<=10;i++){
        sum+=i*n;
       }
       printf("The total sum is: %d\n",sum);
    return 0;
}

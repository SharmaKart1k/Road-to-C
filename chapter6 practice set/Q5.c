/* 5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
#include<stdio.h>
// function prototype
void calculate(int, int, int*, float*);
// function definition
void calculate(int a,int b,int* sum,float* avg){
    *sum = a + b;
    int* ad_sum=&sum;
    printf("The address of this sum is:%u\n",ad_sum);
    *avg = *sum/2.0;
    int* ad_avg=&avg;
    printf("The address of average is:%u\n",ad_avg);
} 
int main(){
    int x=2,y=4;
    int sum;
    float avg;
    calculate(x,y,&sum,&avg);
    printf("The sum of the two no is: %d\n",sum);
    printf("The avg of two no is: %.2f\n",avg);
    return 0;
}
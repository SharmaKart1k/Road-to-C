// wap to store table of 5 in an array
//.Q. Repeat problem 2 for a general input provided by the user using scanf
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n* (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d x %d is %d\n",n,i+1,arr[i]);
    }
    
    return 0;
}
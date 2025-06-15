// Write a program containing functions which counts the number of positive integers in an array.

#include<stdio.h>
    int countpositive(int a[],int n){
        int no_of_positive=0;
        for(int i=0;i<n;i++){
        if (a[i] > 0)
        {
           no_of_positive++;
        }
    } 
     return no_of_positive;
    }
int main(){
    int arr[]={1,2,-3,4,-5,6,-7,8,9,-10};
    printf("No of positive no in array are:%d",countpositive(arr,10)); 
    return 0;
}
/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/
#include<stdio.h>
int main(){
    int a[]={11,2,3,44,52,61,72,88,9,10};
    int* ptr= a; // a directly points to the first number in array
    printf("The value at address %u is %d",ptr+3,*(ptr+3));
    return 0;
}
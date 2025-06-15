// Write a program containing a function which reverses the array passed to it?
#include <stdio.h>
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
}

int temp;
void reversearray(int a[],int n){
    for (int i = 0; i < n/2; i++)   // n/2 runs the loop till half of the array
    {
        // logic for reversing:-
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
       
    }
   
}
int main(){
    int arr[]={ 1, 2, 3, 4, 5, 6};
    printarray(arr,6);    // prints the original array
    reversearray(arr,6); // calls the reverse function 
    printarray(arr,6);  // prints the reversed array
    return 0;
}


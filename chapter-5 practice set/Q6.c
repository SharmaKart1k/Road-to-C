// Write a program using function to print the following pattern (first n lines) *
//                                                                               ***
//                                                                               *****
#include<stdio.h>
int main(){
    int n = 3;
    for(int i=0; i<n; i++){ // this loop prints n no of line 
        // if 0----> print 1 *
        // if 1----> print 3 ***
        // if 2----> print 5 *****
    // (i*2+1) formula
        for(int j=0;j<i*2+1;j++){ // and this loop uses the formula and increase the stars as per n no of lines
            printf("*");
        }
        printf("\n"); //prints a new line
    }
    return 0;
}
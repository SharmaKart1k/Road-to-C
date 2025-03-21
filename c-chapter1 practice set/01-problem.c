//write a program  to calc the area of a rectangle using user input?
#include<stdio.h>
int main(){
    int length,breadth;
   printf("enter length:\n");
    scanf("%d", &length);

    printf("enter breadth:\n");
    scanf("%d", &breadth);

    printf("the area of this rectangle is: %d\n ", length*breadth);
    return 0;
}
    
// compiled successfully!

//write a program to calc the area of a rectangle using hard code inputs?
#include<stdio.h>
    int main(){
    int length=6;
    int breadth=4;
    printf("The area of the rectangle is: %d",length*breadth);
    return 0;
}
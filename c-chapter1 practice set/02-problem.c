//write a program to calculate area of circle then modify it to calculate vol of cylinder?
#include<stdio.h>
int main()
{
    //area of a circle is:3.14*r^2
    //vol of a cylinder is:3.14*r^2*h
    int r;
    int height;
    printf("enter the r:");
    scanf("%d",&r);

    printf("enter the height: ");
    scanf("%d",&height);

    printf("area of a circle with radius %d is %f\n",r,3.14*r*r);
    printf("volume of a cylinder with radius %d and height %d is %f: ",r,height,3.14*r*r*height);
   
    return 0;
}


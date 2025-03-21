//write a program to convert celcius to ferenheit
#include<stdio.h>
    int main(){
        float c,f;
        printf("Enter degree celcius: ");
        scanf("%f", &c);
        f=((9.0/5.0)*c)+32;
        printf("The value in farenheit will be: %f",f);
        return 0;
        
    }
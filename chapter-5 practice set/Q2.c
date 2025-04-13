// Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>
// function prototype 
float sum(int);
// function definition
float sum(int c){

    float f = (c * 9.0 / 5.0) + 32;

    printf("Celsius temp into fahrenheit will be: %.2f\n", f);
    return f;
}
int main(){
    int c;
    printf("Enter Temperature in celcius: ");
    scanf("%d",&c);
    sum(c);
    return 0;
}

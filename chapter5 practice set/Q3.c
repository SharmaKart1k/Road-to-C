// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2 :-
#include<stdio.h>
// function prototype
float sum(int);
// function definitation
float sum(int m){
    float g=9.8;
    float force = m*g;
    printf("The force of attraction on a body is: %.2f",force);
    return force;
}
int main(){
    int m=45;
    sum(m);
    return 0;
}
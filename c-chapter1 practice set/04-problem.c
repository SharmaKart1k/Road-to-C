//  write a progam to calc simple intrest:
#include<stdio.h>
int main(){
    int p, r, t, si;
    printf("enter the value of p: ");
    scanf("%d",&p);
    printf("enter the value of r: ");
    scanf("%d",&r);
    printf("enter the value of t: ");
    scanf("%d",&t);
    
    si=(p*r*t)/100;
    printf("The si will be: %d",si);

    return 0;

}


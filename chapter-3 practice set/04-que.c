// To know if a year entered is a leap year or not?
#include<stdio.h>
int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year % 4==0 && year % 100!=0 || year % 400==0)
    {
        printf("year entered is a leap year\n");
    }else{
        printf("year entered is not a leap year\n");
    }
    return 0;
}
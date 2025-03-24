// 6. Program 5 using ‘for’ and ‘do-while’ loop
#include<stdio.h>
int main(){
    int sum=0;
    for (int i=0; i<=10; i++)
    {
        sum += i;
       
    }  printf("The sum using for loop of ten n numbers is: %d\n",sum);
// by using do while loop implement no 5:
    int i=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("The sum using do while loop of ten n numbers is: %d\n",sum);
    return 0;
}
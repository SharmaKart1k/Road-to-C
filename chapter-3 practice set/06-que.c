// Write a code to find the greatest number among four numbers?
#include<stdio.h>
int main(){
    int a=32,b=14,c=6,d=9;
    if(a>b && a>c && a>d){
        printf("a is greatest among four of them\n");
    }else if(b>a && b>c && b>d){
        printf("b is greatest among four of them\n");
    }else if(c>a && c>b && c>d){
        printf("c is greatest among four of them\n");
    }else if(d>a && d>b && d>c){
        printf("d is greatest among four of them\n");
    }
    return 0;
}
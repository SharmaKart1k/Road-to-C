// To know weather a character entered by a user is lowercase or not?
#include<stdio.h>
int main(){
    char cht;
    printf("enter a character: ");
    scanf("%c",&cht);
    // 97 to 122 is the ascii value for lower-case character!
    // 65 to 90 is the ascii value for upper- case character!
    if(cht>=97 && cht<=122){
        printf("It is a lowercase\n");
    }else if(cht>=65 && cht<=90){
        printf("It is a upper-case character\n");
    }else{
        printf("it is not a lower case character\n");
    }
        printf("The value of character is %d\n",cht);
    return 0;
}

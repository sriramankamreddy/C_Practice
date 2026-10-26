#include <stdio.h>

int main(){
    int a, dup, rem, quo, rev = 0;
    scanf("%d", &a);
    dup = a;
    while(a != 0){
        rem = a % 10;
        quo = a / 10;
        rev = rev * 10 + rem;
        a = quo;
    }
    if(rev == dup){
        printf("The given Number is Palindrome\n");
    }else{
        printf("The given Number is not a Palindrome\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a, rem, quo, rev = 0;
    scanf("%d", &a);
    while(a != 0){
        rem = a % 10;
        quo = a / 10;
        rev = rev * 10 + rem;
        a = quo;
    }
    printf("%d\n", rev);
    return 0;
}
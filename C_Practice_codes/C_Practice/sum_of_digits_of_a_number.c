#include <stdio.h>

int main(){
    int a, rem, quo, sum = 0;
    scanf("%d", &a);
    while(a != 0){
        rem = a % 10;
        quo = a / 10;
        sum += rem;
        a = quo;
    }
    printf("Sum of digit is: %d\n", sum);
    return 0;
}
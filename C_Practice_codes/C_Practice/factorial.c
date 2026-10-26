#include<stdio.h>

int main(){
    int a, mul = 1;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++){
        mul = mul * i;
    }
    printf("Factorial of %d is %d\n", a, mul);
    return 0;
}
#include <stdio.h>

int main(){
    int a, rem, sum = 0, mul, quo;
    scanf("%d", &a);
    int dup = a;
    while(a != 0){
        rem = a % 10;
        mul = 1;
        for(int i = 1; i<=rem; i++){
            mul = mul * i;
        }
        quo = a / 10;
        sum = sum + mul;
        a = quo;
    }
    if(dup == sum){
        printf("The give number is Perfect Number\n");
    }else{
        printf("The give number is not a Perfect Number\n");
    }
    return 0;
}
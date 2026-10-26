#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    sum = (n*(n+1)/2);
    printf("The sum of %d natural numbers is %d\n", n, sum);
    return 0;
}
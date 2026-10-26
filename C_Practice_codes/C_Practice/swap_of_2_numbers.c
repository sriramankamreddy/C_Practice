#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    a = a + b; //15
    b = a - b; //10
    a = a - b; //5
    printf("%d %d\n", a, b);
}
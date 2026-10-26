#include <stdio.h>

int main(){
    int a=0, b=1, c, num;
    scanf("%d", &num);
    printf("%d\n", a);
    printf("%d\n", b);
    for(int i = 1; i<=num; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}
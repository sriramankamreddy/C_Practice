#include <stdio.h>

int main(){
    int a, count = 0, pow = 1, in;
    scanf("%d%d", &a, &in);
    int dup = a;
    for(int i=1; i<=in; i++){
        pow = a * pow;
    }
    printf("%d\n",pow);
    return 0;
}
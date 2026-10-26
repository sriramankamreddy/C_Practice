#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c){
        printf("A(%d) is greater\n", a);
    }else if(b >= a && b >= c){
        printf("B(%d) is greater\n", b);
    }else{
        printf("C(%d) is greater\n", c);
    }
    return 0;
}
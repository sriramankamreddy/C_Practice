#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a,&b);
    if(a > b){
        printf("A(%d) is greater\n", a);
    }else{
        printf("B(%d) is greater\n", b);
    }
    return 0;
}
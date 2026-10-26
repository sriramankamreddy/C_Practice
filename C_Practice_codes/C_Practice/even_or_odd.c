#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("The give number %d is Even\n", a);
    }else{
        printf("The give number %d is Odd\n", a);
    }
    return 0;
}
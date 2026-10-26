#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a > 0){
        printf("The given number %d is Positive\n", a);
    }else{
        printf("The given number %d is Negative\n", a);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a % 400 == 0){
        printf("The year %d is a Leap Year\n", a);
    }else if(a % 4 == 0 && a % 100 != 0){
        printf("The year %d is a Leap Year\n", a);
    }else{
        printf("The year %d is Not a Leap Year\n", a);
    }
    return 0;
}
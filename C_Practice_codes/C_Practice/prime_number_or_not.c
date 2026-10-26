#include <stdio.h>

int main(){
    int a, count = 0;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++){
        if(a % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("The given number %d is Prime\n", a);
    }else{
        printf("The given number %d is Not a Prime\n", a);
    }
    return 0;
}
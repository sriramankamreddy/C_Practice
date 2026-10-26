#include <stdio.h>

int main(){
    int a, sum = 0, dup;
    scanf("%d", &a);
    dup = a;
    for(int i=1; i<dup; i++){
        if(dup%i == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    if(dup == sum){
        printf("The given number is Perfect\n");
    }else{
        printf("The gvien number is Not a Perfect Number\n");
    }
    return 0;
}
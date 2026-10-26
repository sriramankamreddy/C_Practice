#include <stdio.h>

int main(){
    int a, rem, quo, sum = 0, count = 0;
    scanf("%d", &a);
    int dup = a;
    while(dup != 0){
        dup = dup / 10;
        count++;
    }
    dup = a;
    while(dup != 0){
        rem = dup % 10;
        quo = dup / 10;
        int po = 1;
        for(int i = 0; i < count; i++){
            po = po * rem;
        }
        sum = po + sum;
        dup = quo;
    }
    if(sum == a){
        printf("The given number is armstrong number\n");
    }else{
        printf("The given number is not armstrong number\n");
    }
    return 0;
}
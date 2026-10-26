#include <stdio.h>

int main(){
    int a,b, count;
    scanf("%d%d", &a,&b);
    for(int i=a; i<=b; i++){
        count = 0;
        for(int j = 1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d Prime\n", i);
        }
    }
    return 0;
}
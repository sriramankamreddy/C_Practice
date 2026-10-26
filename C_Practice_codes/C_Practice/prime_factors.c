#include <stdio.h>

int prime(int i){
    int count = 0;
    for(int j=1; j<=i; j++){
        if(i%j == 0){
            count++;
        }
    }
    if(count == 2){
       printf("%d ", i); 
    }
    return 0;
}


int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        if(a%i == 0){
            prime(i);
        }
    }
    printf("\n");
    return 0;

}
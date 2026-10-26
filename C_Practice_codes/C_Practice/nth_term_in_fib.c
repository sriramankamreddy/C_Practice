#include <stdio.h>

int main(){
    int a = 0, b = 1, c, num;
    scanf("%d", &num);
    int last_num = 0;
    for(int i=1; i<=num; i++){
        c = a + b;
        a = b;
        b = c;
        last_num = c;
    }
    printf("%d\n", last_num);

}
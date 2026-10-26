#include <stdio.h>

int main(){
    int start, end;
    int rem, quo, count=0, sum = 0;
    scanf("%d%d", &start, &end);
    for(int i = start; i <= end; i++){
        int dup = i;
        int count = 0;
        int sum = 0;
        while(dup != 0){
            count++;
            dup = dup / 10;
        }
        dup = i;
        while(dup != 0){
            rem = dup % 10;
            quo = dup / 10;
            int pow = 1;
            for(int i = 0; i < count; i++){
                pow = pow * rem;
            }
            sum = pow + sum;
            dup = quo;
        }
        if(sum == i){
            printf("%d\n", sum);
        }
    }
}
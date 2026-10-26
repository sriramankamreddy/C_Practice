#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    //sorting
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int start = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i] == start){
            start++;
            continue;
        }else{
            printf("The missing element is %d\n", start);
            break;
        }
    }
    return 0;
}
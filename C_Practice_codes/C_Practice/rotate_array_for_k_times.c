#include<stdio.h>

int main(){
    int k, size;
    scanf("%d%d", &k, &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < k; i++){ 
        int last = arr[size-1]; 
        for(int j = size-1; j>0; j--){ 
            arr[j] = arr[j-1]; 
        }
        arr[0] = last; 
    }



    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(int k = 0; k < size; k++){
        if(arr[k] > largest){
            largest = arr[k];
        }
    }
    printf("The largest element is %d\n", largest);
    return 0;
}
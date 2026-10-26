#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("The smallest element in an array is: %d\n", smallest);
    return 0;
}
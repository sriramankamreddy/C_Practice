#include <stdio.h>

int main(){
    int size, temp;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){ //5 2 3 7 1  
            temp = arr[j]; 
            arr[j] = arr[j+1]; 
            arr[j+1] = temp;
            }
        }
    }
    for(int j=0; j<size; j++){
        printf("%d ", arr[j]);
    }
    printf("\nThe Second largest number in an array is: %d\n", arr[1]);
    return 0;
}
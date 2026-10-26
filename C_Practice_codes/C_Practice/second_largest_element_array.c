#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] < arr[j+1]){ // 1 2 3 4 5
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The second largest element in the array is : %d\n", arr[1]);
    return 0;
}
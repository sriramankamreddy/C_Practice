#include <stdio.h>

int sorting(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int size1, size2;
    scanf("%d%d", &size1, &size2);
    int arr1[size1], arr2[size2];
    for(int i=0; i<size1; i++){
    scanf("%d", &arr1[i]);
    }
    for(int j=0; j<size2; j++){
        scanf("%d", &arr2[j]);
    }
    //sorting
    sorting(arr1, size1);
    sorting(arr2, size2);
    int array[size1+size2];
    for(int i=0; i<(size1+size2); i++){
        if(i<size1){
            array[i] = arr1[i];
        }else{
            array[i] = arr2[i - size1];
        }
    }
    sorting(array, (size1+size2));
    for(int i=0; i < (size1+size2); i++){
        printf("%d ", array[i]);
    }
    return 0;
}

// arr1 = 1 2 3 4 5
// arr2 = 6 7 8 9 10
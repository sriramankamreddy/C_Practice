#include <stdio.h>

int main(){
    int size, k;
    scanf("%d%d", &size, &k);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    //sorting
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int low = 0, high = size-1;
    while(low <= high){  //12345
        int mid = (low+high)/2;
        if(k > arr[mid]){
            low = mid + 1;
        }else if(k < arr[mid]){
            high = mid - 1;
        }else if(k==arr[mid]){
            printf("The element position is: %d\n", mid);
            break;
        }
    }

    return 0;
}
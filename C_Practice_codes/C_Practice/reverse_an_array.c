//using a 3rd variable
#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){ // 1 2 3 4 5
        scanf("%d",&arr[i]);
    }
    int start = 0, end = size-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}






/*#include <stdio.h>
//without using 3rd variable
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){ // 1 2 3 4 5
        scanf("%d",&arr[i]);
    }
    int half = size/2;
    for(int i=0; i<size/2; i++){
        arr[i] = arr[i] + arr[size - i -1]; //6
        arr[size - i -1] = arr[i] - arr[size - i -1]; //1
        arr[i] = arr[i] - arr[size - i -1]; //6 - 1
    }
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}*/
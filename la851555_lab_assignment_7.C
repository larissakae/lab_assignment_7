/* Larissa Kaewrasamee
    July 7th, 2023
    Lab Assignment #7
    COP 3502    */

#include <stdio.h>
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int i, j, temp, count = 0;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    printf("Number of Swaps: %d\n", count);
}


int main(){
    int arr[] = {97,16,45,63,13,22,7,58,72};
    int n = 9;

    printf("Array before sorting: \n");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("Sorted Array: \n");
    printArray(arr, n);
    return 0;   
}
    

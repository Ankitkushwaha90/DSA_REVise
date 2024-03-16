#include <stdio.h>
#include <stdlib.h>

// traversal array
void printArray(int A[], int n){
    for(int i= 0; i< n; i++){
        printf("%d ", A[i]);
    }
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low+1;
    int j = high;
    int temp;

    do{
        while(A[i]<=pivot){
        i++;
        }

        while(A[j]>pivot){
            j--;
        }
        
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);
}

// Quicksort Array
void quickSort(int A[], int low, int high){
    int partitionIndex;

    if(low<high){
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex -1); // short left subarray
        quickSort(A, partitionIndex + 1, high); // shor right subarry
    }

}

int main(){
    // printf("here krishna");
    int A[] = {1,9,3,2,4,5,6,7,8};
    int n = sizeof(A)/ sizeof(int);

    printArray(A, n);

    quickSort(A, 0, n-1);

}
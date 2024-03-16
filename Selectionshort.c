#include <stdio.h>

//swap
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//selection sort
void selectionSort(int array[], int size) {
    for(int step = 0; step<size -1; step++){
        int min_idx = step;
        for(int i = step + 1; i< size; i++ ){
            if(array[i]< array[min_idx]){
                min_idx = i;
            }
        }
        swap(&array[min_idx], &array[step]);
    }
}

void bubbleShort(int *A, int n){
    int temp;
    for(int i=0; i<n-1 ; i++){  // for number of passing...
        for(int j= 0; j< n-1-i; j++){
            if(A[j]>A[j+1]){
                temp= A[j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }
}

void insertionSort(int *A, int n){
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

// traversal order
void traversal(int A[], int size){
    for(int i=0; i< size; i++){
        printf("%d\n", A[i]);
    }
}

int main(){
    // printf("Radhe krishna");
    int A[] = {1, 2,9,7,6,5,4,2,3,6};
    int n = sizeof(A)/sizeof(A[0]);

    selectionSort(A,n);
    traversal(A, n);
}
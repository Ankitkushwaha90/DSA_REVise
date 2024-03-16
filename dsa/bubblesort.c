#include <stdio.h>

void printArray(int* A, int n){
    for(int i= 0; i < n; i++){
            printf("%d ", A[i]);       
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

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A)/sizeof(int);

    printArray(A, n); // printing the array before sorting...

    bubbleShort(A, n); // Function the short the Array
    printf("\n");
    printArray(A, n); // printing the array after sorting...

    return 0;
}
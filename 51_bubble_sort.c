#include<stdio.h>


void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    for(int i= 0; i< n-1; i++)// for number pass    
    {
        int temp;
        for(int j= 0; j< n-1-i; j++) // compazn
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A)/sizeof(int);
    printArray(A, n); //printing before
    bubbleSort(A, n);
    printArray(A, n); // printing after sort
    return 0;
}
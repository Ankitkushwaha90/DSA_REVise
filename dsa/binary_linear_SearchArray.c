#include <stdio.h>

void traversal(int * A, int  n){
    for(int i; i<n; i++){
         printf("\nHare Radhe Krishna A[%d] => %d", i, A[i]);
    }
}

void linear_search(int *A, int n, int x){
    for(int i; i< n; i++){
        if(A[i] == x)
            printf("hare krishna A[%d] => %d", i, x);
    }
}

int binarySearch(int A[], int n, int x){
    printf("Hare Radhe Krishna!");

    int low, high, mid;
    low = 0;
    high = n-1;

    while(low<=high){
        mid = (low + high) / 2;

        if(x == A[mid]){
            return mid;
        }
        if(x > A[mid]){
            return mid+1;
        }
        else{
            return mid -1;
        }

    }
    return -1;
}

void binarySearchTelling(int *A, int n, int f){
    int d = binarySearch(A, n, f);

    if(d != -1){
        printf("\nit is found on index NO. A[%d] => %d", d+1, f);
    }else{
        printf("it is not found");
    }
}



int main(){
    int A[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/ sizeof(int);
    int f =7;
    // traversal(A, n);
    // linear_search(A, n, 5);
    

    binarySearchTelling(A, n, f);
    
}
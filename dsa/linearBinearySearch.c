#include <stdio.h>


void linearSearch(int* a, int n, int x){
    for(int i = 0; i< n; i++){
        if(a[i] == x)
            printf("here krishna a[%d] => %x", i, x);
    }
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(int);
    printf("hare Radhe krishan ");
    linearSearch(A, n, 9);
}
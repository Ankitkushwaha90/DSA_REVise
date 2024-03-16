#include <stdio.h>
#include <stdlib.h>


void quicksort(int a[], int n)
{
    if (n <= 1) return;
    int p = a[n/2];
    int b[n], c[n];
    int i, j = 0, k = 0;
    for (i=0; i < n; i++) {
        if (i == n/2) continue;
        if ( a[i] <= p) b[j++] = a[i];
        else            c[k++] = a[i];
    }
    quicksort(b,j);
    quicksort(c,k);
    for (i=0; i<j; i++) a[i] =b[i];
    a[j] = p;
    for (i= 0; i<k; i++) a[j+1+i] =c[i];
}


int main(void) {
    int i;
    /* das Array zum Sortieren */
    int test_array[] = { 5, 2, 7, 9, 6, 4, 3, 8, 1 };
    int N = sizeof(test_array)/sizeof(int);

    quicksort(test_array,  N);

    for(i = 0; i < N; i++)
        printf("%d ", test_array[i]);
    printf("\n");

    return 0;
}
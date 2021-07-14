#include<stdio.h>

void array(int A[], int n){ // or we can write (int *A, int n)
    for(size_t i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(){
    int P[5] = {1,2,3,4,5};
    int n = 5;
    array(P, n);
    return 0;
}
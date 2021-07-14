#include<stdio.h>
#include<stdlib.h>

int* array(int n){
    int *A;
    A = (int *)malloc(n*sizeof(int));
    return A;
}

int main(){
    int *P;
    P = array(5);
    // P = [1,2,3,4,5];
    // printf("%d", P[0]);
    return 0;
}
#include <stdio.h>

int main(){

    int arr[4];
    //  initializing at declaration int A[5] = {1,2,3,4,5};

    printf("Enter elements of array : ");
    
    for (size_t i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You entered : ");
    for( size_t i = 0; i < 4; i++){
        printf("\t%d", arr[i]);
    }

    printf("\n");

    return 0;    

}
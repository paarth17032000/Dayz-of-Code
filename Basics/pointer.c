#include<stdio.h> 
#include<stdlib.h>  // for using malloc function

int main(){
    int a = 10 ;
    int *p = &a; //pointer to a (initialization)

    printf("%d\n", a);
    *p = 20;
    printf("%d\n", *p); //defrencing
    
    //  creating space in heap
    int *x;

    // storing in x
    // (int*) is typecast
    // malloc creates space in heap
    // sizeof(type) tells amount of space
    // this creats space for 5 integers

    // in c
    x = (int*)malloc(5*sizeof(int)); // return void pointer so we typecast

    // in C++
    // x = new int[5];

    
    return 0;
}

// reference (it is a nickname of a variable)
// only available in C++  

// int main(){
//     int a = 10;
//     int &r = a;
    
//     printf("%d\n", a);  
//     printf("%d\n", r);
//     r = 25;
//     printf("%d\n", a);
//     printf("%d\n", r);

//     return 0;
// }
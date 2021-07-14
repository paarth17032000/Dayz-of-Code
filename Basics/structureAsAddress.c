#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle *r){ 
    return r->length*r->breadth;
}

int main(){
    struct Rectangle R = {10,5};
    printf("%d\n", area(&R));
    return 0;
}
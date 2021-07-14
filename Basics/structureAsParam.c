#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r){ // for call by reference use (struct Rectangle &r)
    // r.length = 40;
    return r.length*r.breadth;
}

int main(){
    struct Rectangle R = {10,5};
    printf("%d\n", area(R));
    return 0;
}
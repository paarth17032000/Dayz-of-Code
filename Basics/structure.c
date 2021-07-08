#include<stdio.h>

// struct Rectangle
// {
//     int length;
//     int breadth;
// };


// int main(){
//     struct Rectangle R = {8,5};
//     printf("Area of Rectangle is %d\n", R.length*R.breadth);
//     return 0;
// }

struct Card {
    int face; // values can be from 1,2....13 
    int shape; // values can be from 0,1,2,3 as four shapes
    int color; // values can be from 0,1 as black or red
};

int main(){
    struct Card Deck[4] = {{1,3,1},{1,1,0},{1,0,0},{1,2,1}};
    printf("Face of first card of deck is %d\n", Deck[0].face);
    printf("Shape of first card of deck is %d\n", Deck[0].shape);
    return 0;
}
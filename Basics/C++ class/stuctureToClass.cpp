#include<iostream>

using namespace std;

class Rectangle{
    private:
        int lenght;
        int breadth;

    public:
        Rectangle(int l, int b){
            lenght = l;
            breadth = b;
        }

        int area(){
            return lenght*breadth;
        }

        void changeLength(int l){
            lenght = l;
        }
};

int main(){
    Rectangle R(14,10);
    cout << R.area() << endl;
    R.changeLength(20);
    cout << R.area() << endl;
}
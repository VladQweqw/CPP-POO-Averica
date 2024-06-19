#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        Rectangle(int Length, int Width) {
            length = Length;
            width = Width;
        };

        int area() {
            return length * width;
        };

        int perimeter() {
            return length + width * 2;
        };
};

int main() {
    Rectangle rect(2, 3);

    cout<<rect.area()<<"\n";
    cout<<rect.perimeter();
};
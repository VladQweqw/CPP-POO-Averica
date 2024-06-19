#include <iostream>
using namespace std;

class Triangle {
    private: 
        int a;
        int b;
        int c;
    
    public:
        Triangle(int A, int B, int C) {
            a = A;
            b = B;
            c = C;
        };

        string type() {
            if(a == b && b == c && a == c) {
                return "Echilateral";
            }else if((a == b && a != b && a != c) || (a == c && b != a && b != c) || (b == c && b != a && c != a)) {
                return "Isosceles";
            }else {
                return "Scalene";
            };

        };

};

int main() {
    Triangle trg(3, 4, 5);
   
    cout<<"Triangle type is "<<trg.type();
};
#include <iostream>
using namespace std;

class Circle {
    private:
        int radius;

    public:
        Circle(int Radius) {
            radius = Radius;
        }

        void calculate() {
            float area = (1.73 * radius * radius);
            int circ = radius * 2;

            cout<<"Area: "<< area<<"\n";
            cout<<"Circumerence: "<< circ <<"\n";
        };
    
};

int main() {
    Circle cerc(3);

    cerc.calculate();

};
#include <iostream>
using namespace std;

class Triangle {
    private:
        float a;
        float circumeference;
        float area;

    public:
        void setA(float length) {
            a = length;
            circumeference = a * 3;
            area = (1.73 * a * a) / 4;
        };

        // friend void printResults(Triangle);
        friend class Homework;

};

class Homework {
    public: 
        void printResults(Triangle et) {
            cout<<"circumeference: "<< et.circumeference<<"\n";
            cout<<"area: "<< et.area<<"\n";
    };
};

int main() {
    Triangle et;
    Homework h;

    et.setA(3);
    
    h.printResults(et);
}
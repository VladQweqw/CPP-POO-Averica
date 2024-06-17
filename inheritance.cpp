#include <iostream>
using namespace std;

class Vehicle {
    public:
        int total_km;
        int factory_year;
        virtual void Drive() = 0;
};

class Boat : public Vehicle {
    public: 
        void Drive() {
            cout<<"Driving on water\n";
        };
};

class Plane : public Vehicle {
    public: 
        void Drive() {
            cout<<"Flying on the sky\n";
        };
};

class Car : public Vehicle {
    public: 
        void Drive() {
            cout<<"Driving on road\n";
        };
};

int main() {
    Vehicle* vehicles[3];

    vehicles[0] = new Boat();
    vehicles[1] = new Plane();
    vehicles[2] = new Car();

    for(int i = 0; i < 3; i++) {
        vehicles[i]->Drive();
    };

    for(int i = 0; i < 3; i++) {
        delete vehicles[i];
    };

};
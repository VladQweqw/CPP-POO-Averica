#include <iostream>
using namespace std;

class Instrument {
    public: 
        virtual void makeSound() {
            cout<<"Instrument playing...\n";
        }
};

class Clarinet:public Instrument {
    public:
        void makeSound()  {
            cout<< "Clarinet is singing...\n";
        }       
};

int main() {
    Instrument* clarinet = new Clarinet();

    clarinet->makeSound();
}
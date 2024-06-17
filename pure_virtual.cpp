#include <iostream>
using namespace std;

class Instrument {
    public: 
    // every class that inheretance trb sa provide o fuctie makeSouund()
        virtual void makeSound() = 0;
};

class Clarinet:public Instrument {
    public:
        void makeSound()  {
            cout<< "Clarinet is singing...\n";
        }       
};

class Piano:public Instrument {
    public:
        void makeSound() {
            cout<< "Piano is singing...\n";
        }
};

int main() {
    Instrument* clarinet = new Clarinet();
    Instrument* piano = new Piano();

    Instrument* instruments[2] = {clarinet, piano};

    for(int i = 0; i < 2; i++) {
        instruments[i]->makeSound();
    }

}   
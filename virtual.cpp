#include <iostream>
using namespace std;

// daca exista o implementare de fuctie makeSound() in clasa derivata ( adica Clarinet e.g ) foloseste o p aia, daca n ufolosteste o pe cea din clasa Instrument ( default )
class Instrument {
    public: 
        // folosesti virtual pt a face asta, dac anu ai avea virtual ar fi o functie normala
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
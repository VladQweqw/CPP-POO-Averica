#include <iostream>
#include <list>

using namespace std;

class Car {

    private:
        int factory_year;
        string type;
        string model;
        list<string> repairs;

    protected:
        int experience;

    public:
        Car(string Type, string Model, int Factory_year) {
            factory_year = Factory_year;
            type = Type;
            model = Model;
            experience = 0;
        }
        void display() {
            cout << "Type: " << type << "\n";
            cout << "Model: " << model << "\n";
            cout << "Fabrication year: " << factory_year << "\n";
            cout<< "Experience: "<< experience << " years\n";

            cout<<"Repairs: ";
            if(repairs.size() == 0) cout<<"None";
            for(string repairLocation : repairs) {
                cout<<repairLocation<<" ";
            }
        }
        void year_passed() { 
            factory_year++; 
            experience++; 
        }
        void add_repair(string Location) {
            repairs.push_back(Location);
        }

};

class Boat: public Car {
    public:
        Boat(string Type, string Model, int Factory_year): Car(Type, Model, Factory_year) {
            
        };
        
};

int main() {

//   Car duster("Dacia", "Duster", 2012);
//   duster.year_passed();
//   duster.add_repair("Moscow");
//   duster.display();

  Boat ship("Tanker", "Fuel", 2001);
  ship.add_repair("China");
  ship.add_repair("Romania");

  ship.year_passed();
  ship.year_passed();
  ship.year_passed();
  ship.display();
}
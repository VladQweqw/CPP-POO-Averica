#include <iostream>

using namespace std;

class Car {
    private:
        string type;
        string model;
        int year;
        string tires_category;
        bool winch;

    public:
        Car(string Type, string Model, int Year, string Tires, bool Winch) {
            type = Type;
            model = Model;
            year = Year;
            tires_category = Tires;
            winch = Winch;
        };

        void Drive() {
            cout<<"Driving off road";
        };

        void Year_Pass() {
            year++;
        };

        string canPass(string terrain) {
            if(terrain == "mud") {
                if(tires_category == "MT") return "Yes";
                return "No";
            }else if(terrain == "gravel") {
                if(tires_category == "AT" || tires_category == "MT") return "Yes";
                return "No";
            }else {
                return "Yes";
            };
        };

        friend class Display;
};

class Display {
    public:
        vehicleDetails(Car car) {
            cout<<"Type: "<<car.type<<"\n";
            cout<<"Model: "<<car.model<<"\n";
            cout<<"year: "<<car.year<<"\n";
            cout<<"Tires type: "<<car.tires_category<<"\n";
        
            cout<<"Winch: "<< (car.winch ? "Yes" : "No") <<"\n";
        }
};

int main() {
    Car pajero("Mitshubishi", "Pajero", 1999, "MT", true);
    Display d;
    
    string terrain = "dirt";

    cout<<"Can pass "<<terrain<<"? answer is "<<pajero.canPass(terrain)<<"\n";

    d.vehicleDetails(pajero);
};
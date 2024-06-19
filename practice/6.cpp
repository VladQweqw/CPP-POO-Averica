#include <iostream>

using namespace std;

class Employee {
    private: 
        int id;
        string name;
        int salary;
    
    public:
        Employee(int Id, string Name, int Salary) {
           id = Id;
           name = Name;
           salary = Salary;
        };

        void performance(float performance) {
            if(performance == 0) {
                cout<<"Invalid performance, salary remains the same ("<<salary<<")\n";
            }else if(performance < 0){
                salary -=100;
            }else {
                salary *= performance;
            };
        };

        void summary() {
            cout<<name<<"'s salary is "<<salary;
        };

};

int main() {
    Employee dani(1, "Dani", 2300);

    dani.performance(-0.1);

    dani.summary();
};
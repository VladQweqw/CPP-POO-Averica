#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string country;

    public:
        Person(string Name, int Age, string Country) {
            name = Name;
            age = Age;
            country = Country;
        };

        string getName() {
            return name;
        };

        int getAge() {
            return age;
        };

        string getCountry() {
            return country;
        };

        void setName(string new_name) {
            name = new_name;
        };
        
        void setAge(int new_age) {
            age = new_age;
        };

        void setCountry(string new_country) {
            country = new_country;
        };
};

int main() {
    Person daniel("Dani", 23, "Romanica");

    daniel.setName("Pascal");    
    daniel.setAge(66);    
    daniel.setCountry("Debreten");    

    cout<<daniel.getName()<<"\n";
    cout<<daniel.getCountry()<<"\n";
    cout<<daniel.getAge()<<"\n";
};
#include <iostream>
using namespace std;

class Punct {
    double x, y;

    public:
        Punct(double xx = 0.0, double yy = 0.0) {
        x = xx;
        y = yy;
    }

    virtual double Area() {
        return 0.0;
    }

    void Print() {
        cout << "Punct\n";
    }
};

class Cerc: public Punct {
    double raza;
    public:
        Cerc(double r = 0.0) {
        raza = r;
    }

    virtual double Area() {
        return 3.14 * raza * raza;
    }
    void Print() {
        cout << "Cerc\n" << endl;
    }

};
void Calcul(Punct * p) {
    cout << p -> Area() << endl;
}

int main(void) {
    Cerc * cerc = new Cerc(10);
    Punct * pct = cerc; //corect

    pct -> Print(); // ce apare pe ecran ?
    cerc -> Print();

    cout << pct -> Area() << "\n"; // ce apare pe ecran ?
    cout << cerc -> Area() << "\n"; // ce apare pe ecran ?

    Calcul(pct); // ce apare pe ecran ?
    Calcul(cerc); // ce apare pe ecran ?

    delete cerc;
    return 0;
}
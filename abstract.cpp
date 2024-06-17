#include <iostream>
using namespace std;

class Phone {
    public:
        virtual void TakeASelfie() = 0;
        virtual void makeACall() = 0;
};`

class Android:public Phone {
    public:
        void TakeASelfie() {
            cout<<"Selfie took\n";
        };

        void makeACall() {
           cout<<"Andoid calling\n";
        }
};

class Iphone:public Phone {
    public:
        void TakeASelfie() {
           cout<<"Iphone selfie took\n";
        };

        void makeACall() {
           cout<<"Iphone calling\n";
        };
};

int main() {
    Phone* s20 = new Android();
    Phone* xs = new Iphone();

    xs->TakeASelfie();
    s20->TakeASelfie();

    xs->makeACall();
    s20->makeACall();
}
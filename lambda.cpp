#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main() {    
    // vector de int;
    vector <int> v{2, 3, 7, 14, 23};
    int d = 3;

    // daca vr sa schimbi d u pui &d -> referinta adica
    // [] in astea pui variabiblele pe care le vrei din tot programaru, din block scope *
    // () pui parametri si {} codu;
    for_each(v.begin(), v.end(), [&d](int x) { 
        
        if(x % d == 0) {
            cout<< x << " is divisible by " <<d<<"\n";
        }else {
            cout<< x << " is not divisible by " <<d<<"\n";
        };
    });


    cout<<"d: "<<d;

};  

#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        float* rates;
        int ratesCounter;
    
        Book(string Title, string Author) {
            title = Title;
            author = Author;

            ratesCounter = 2;
            rates = new float[ratesCounter];
            rates[0] = 4;
            rates[1] = 5;

        }

        ~Book() {
            delete [] rates;
            rates = nullptr;
        }

        Book(const Book& original) {
            title = original.title;
            author = original.author;
            ratesCounter = original.ratesCounter;

            rates = new float[ratesCounter];
            for(int i = 0; i < ratesCounter; i++) {
                rates[i] = original.rates[i];
            }
        }

};  

void PrintBook(Book book) {
    cout<<"Title: "<<book.title<<'\n';
    cout<<"Author: "<<book.author<<'\n';
    cout<<"Rates Num: "<<book.ratesCounter<<'\n';
    
    cout<<"Rates: ";
    for(int i = 0; i < book.ratesCounter; i++) {
        cout<<"\n-> Rate "<<i + 1<<": "<<book.rates[i];
    }
}

int main() {
    Book book1("niggers", "fuckers");
    Book book2("patriciu", "daneil");

    Book book3(book1);

    PrintBook(book1);
    PrintBook(book2);
    PrintBook(book3);


};
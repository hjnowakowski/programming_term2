#include <iostream>

using namespace std;

//lista1
//all rights reserved
//Henryk Nowakowski

//zadanie 1, 2,  ---------------------------
class poczta{
    public:
        string nadawca;
        string odbiorca;
        string temat;
        string tresc;

    void wczytej(){
        cin >> nadawca;
        cin >> odbiorca;
        cin >> temat;
        cin >> tresc;

    }
    void wypisz()
    {
        cout << nadawca <<endl;
        cout << odbiorca <<endl;
        cout << temat <<endl;
        cout << tresc <<endl;
    }
};

class book{
public:
    string title;
    string author;
    string publisher;

    void wczytej(){
        cin >> title;
        cin >> author;
        cin >> publisher;
    }
    void wypisz()
    {
        cout << title <<endl;
        cout << author <<endl;
        cout << publisher <<endl;
    }
};

class Triangle {
public:


    double h; //wysokosc
    double a; //podstawa

    void wczytaj() {

    cout << "Podaj rozmiar wysokości i podstawy trójkąta";
    cin >> h;
    cin >> a;
    }


    double pole()
    {
        return h*a;
    }




};
//---------------------------------

//TODO usunąć std i dodać zadania 2, 3 i ostatnie 

int main() {

    poczta m1;
    poczta m2;

    cout << "Podaj nadawcę, odbiorcę, temat i treść: " << endl;
    m1.wczytej(m1);
    cout << "Podaj ponownie nadawcę, odbiorcę, temat i treść: " << endl;
    m2.wczytej(m2);

    m1.wypisz(m1);
    m2.wypisz(m2);

    book book1;
    book book2;

    cout << "Podaj nazwę książki, autora i wydawnictwo: " << endl;
    book1.wczytej(book1);
    cout << "Podaj nazwę książki, autora i wydawnictwo: " << endl;
    book2.wczytej(book2);


    book1.wypisz(book1);
    book2.wypisz(book2);

    Triangle t1;

    t1.wczytaj(t1);
    cout << t1.pole(t1);

    return 0;
}

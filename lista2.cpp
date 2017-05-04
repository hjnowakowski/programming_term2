#include <iostream>



/* Zadania
 * 1 zrobione
 * 2 zrobione
 * 3 zrobione
 * 4 zrobione
 * 5
 * 6
 * 7
 */





class figura{
public:
    int obwd;
    int pole;

};

class square : public figura{
public:
    int a;
};

class triangle : public figura{
public:
    int a;
    int h;

};

class circle : public figura{
public:
    int r;
};



struct Square {
    int a;
};

struct Triangle {
    int a;
    int h;
};


struct Circle {
    int r;
};



class ubranie{
public:
    int material;
    int color;
};


class spodnie : public ubranie{
public:
    int dlugosc;
    int wpasie;
};

class koszula : public ubranie{
public:
    int dlugosc;
    int wklacie;
};

class czapka : public ubranie{
public:
    int obwod;
};

class mebel{
public:
    int producent;
    int kolekcja;
};

class krzeslo : public mebel{
    int odbicie;
};

class stol : public mebel{
public:
    int szerokosc;
    int dlugosc;
};

class szafka : public mebel{
public:
    int szerokosc;
    int wysokosc;
    int glebokosc;
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
  }


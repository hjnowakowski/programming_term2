#include <iostream>
#include <vector>

using namespace std;

//zad 1

class Stale {
public:
	static const double pi, e;
};


//zad 2

class Liczba {
	static int licz;
};
int Liczba::licz = 0;


//zad 3

class Tablica {
public:
	static int tablica[5];
};
int Tablica::tablica[5] = { 2, 3, 5, 7, 11 };

//zad 4

class StalaTablica {
	static const int stalatablica[5];
};
const int Stalatablica::stalatablica[5] = { 2, 3, 5, 7, 11 };


//zad 5


class StalyWektor {
	static const vector <int> stalywektor;
};
const vector <int> Stalywektor::stalywektor = { 2, 3, 5, 7, 11 };


int main()
{
	return 0;
}
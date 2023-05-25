#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>  
#include <fstream>
#include <vector>
#include <cstring>
#include <cassert>
using namespace std;

class Student {
public:
	string nazwisko;
	string imie;
	string grupa;
	string album;
	int rok;
	Student(string n, string i, string g, string a, int r) :nazwisko(n),imie(i),grupa(g),album(a),rok(r) {};
	void print();
	friend std::ostream& operator<<(ostream& os, const Student& s)
	{
		os << "Nazwisko: " << s.nazwisko << endl;
		os << "Imie: " << s.imie << endl;
		os << "Grupa: " << s.grupa << endl;
		os << "Nr albumu: " << s.album << endl;
		os << "Rok: " << to_string(s.rok) << endl;
		return os;
		//print();
	};
};
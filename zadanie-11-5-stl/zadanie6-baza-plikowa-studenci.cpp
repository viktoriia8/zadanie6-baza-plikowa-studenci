#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>     
#include <time.h>       
#include <string>  
#include <fstream>
#include <vector>
#include <cstring>
#include <cassert>
#include <algorithm>
#include "Student.h"
using namespace std;
ifstream& operator<<(ifstream& os, vector<Student>& students) {
    //wczytac studentow
    string nazwisko_;
    string imie_;
    string grupa_;
    string album_;
    int rok_;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko_;
    cout << "\nPodaj imie: ";
    cin >> imie_;
    cout << "\nPodaj grupe: ";
    cin >> grupa_;
    cout << "\nPodaj nr albumu: ";
    cin >> album_;
    cout << "\Podaj rok: ";
    cin >> rok_;
    Student f(nazwisko_, imie_, grupa_, album_, rok_);
    students.push_back(f);
};

int main()
{
    int i = 1;
    vector<Student> students;
    int wybor;
    Student a("nazwisko", "imie", "grupa", "album", 1);
    Student b("nazwisko", "imie", "grupa", "album", 1);
    Student c("nazwisko", "imie", "grupa", "album", 3);
    students.push_back(a);
    students.push_back(b);
    students.push_back(c);
    do{
        cout << "\nMenu\n";
        cout << "1.Wczytaj nowego studenta.\n";
        cout << "2.Wyswietl liste zapisanych studentow.\n";
        cout << "3.Zlicz studentow wybranego roku.\n";
        cout << "4.Zakoncz.\n";
        int h = 1;
        do {
            cout << "Wybierz[1-4]\n";
            cin >> wybor;
            if (wybor == 1) h = 0;
            if (wybor == 2) h = 0;
            if (wybor == 3) h = 0;
            if (wybor == 4) h = 0;
        }while(h);
        if (wybor == 1) {
            cin << students;//??
        }
        else if (wybor == 2)  for_each(students.begin(), students.end(), [](Student k)->void {cout << k; });
        else if (wybor == 3) {
            int rok;
            int p = 1;
            do {
                cout << "Wybierz rok nauki studentow[1-6]\n";
                cin >> rok;
                if (rok == 1) p = 0;
                if (rok == 2) p = 0;
                if (rok == 3) p = 0;
                if (rok == 4) p = 0;
                if (rok == 5) p = 0;
                if (rok == 6) p = 0;
            } while (p);
            cout << "Liczba studentow danego roku to: " << count_if(students.begin(), students.end(), [rok](Student h)->int {return h.rok == rok;  }) << endl;
        }
        else i = 0;

    }while (i);
    return 0;
}


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
        cout << "1.Wczytaj nowego studenta.\n";
        cout << "2.Wyswietl liste zapisanych studentow.\n";
        cout << "3.Zlicz studentow wybranego roku.\n";
        int h = 1;
        do {
            cout << "Wybierz[1-3]\n";
            cin >> wybor;
            if (wybor == 1) h = 0;
            if (wybor == 2) h = 0;
            if (wybor == 3) h = 0;
        }while(h);
        if (wybor == 1) {
            //
        }
        else if (wybor == 2)  for_each(students.begin(), students.end(), [](Student k)->void {cout << k; });
        else {
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

        

    }while (i);
}


// Zadacha4.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double k, a, h, b, r;
	cout << "Vnesi 1 za lice na triangle, 2 za lice na kvadrat, 3 za lice na pravougulnik, 4 za lice na krug: ";
	cin >> k;
    if (k ==1) {
	    cout<<"Vuvedi a strana na triangle: ";
		cin >> a;
		cout << "Vuvedi h visochina na triangle: ";
		cin >> h;
		double k1 = a * h / 2;
        cout <<"Lice na triangle e: " << k1;
    }
	
    else if (k == 2) {
		cout << "Vuvedi a strana na kvadrat: ";
		cin >> a;
		double k2 = a * a;
        cout << "Lice na kvadrat e: " << k2;
    }
	else if (k == 3) {
		cout << "Vuvedi a strana na pravougulnik: ";
		cin >> a;
		cout << "Vuvedi b strana na pravougulnik: ";
		cin >> b;
		double k3 = a * b;
		cout << "Lice na pravougulnik e: " << k3;
	}
	else if (k == 4) {
		cout << "Vuvedi r radius na krug: ";
		cin >> r;
		double k4 = 3.14 * r * r;
		cout << "Lice na krug e: " << k4;
	}
	else {
		cout << "Error";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

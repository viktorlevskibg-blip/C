// Zadacha4.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x;
	cin >> y;
    if (x <= 0) 
    {
		y = 2;
    }
    else if(x > 0 && x < 1) {
		y = x + 2;
    }
    else if (x >= 1 && x <= 2) {
        y = 3;
    }
	else if (x > 2 && x < 3) {
		y = 5 - x;
	}
	else if (x >= 3) {
		y = 2;
	}
	cout << "x = " << x << " y = " << y;
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

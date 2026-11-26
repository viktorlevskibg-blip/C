// PobitoviOperatori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	int s;
	scanf_s("%d",&n);
	scanf_s("%d",&s);
	int and_test = n & s;
	printf("and_test = %x\n", and_test);
	int or_test = n | s;
	printf("or_test = %X\n",or_test);
	int xor_test = n ^ s;
	printf("xor_test = %o\n", xor_test);
	int not_test = ~n;
	printf("not_test = %d\n", not_test);

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

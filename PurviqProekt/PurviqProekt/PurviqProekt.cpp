// PurviqProekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
int main()
/*/ {
	int a = 10;
	double b = 5.5;
	char c = 'abcd';
	std::cout << sizeof(a) << "\n";
	std::cout << sizeof(b) << "\n";
	std::cout << sizeof(c);
}*/
{
	double a = 10;
	printf("Vuvedi a ");
	scanf_s("%lf", &a);
	printf("a=%lf", a);
	printf(" Size of a = %zu bytes\n", sizeof(a));
}

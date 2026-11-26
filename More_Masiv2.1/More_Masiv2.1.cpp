// More_Masiv2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	const int  N = 10;
	float A[N];
	int przv = 1;
	float sum = 1;
	float num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		A[i] = num;

	}
	for (int i = 0; i < N; i++)
	{

		cout << A[i] << " ";

	}


	for (int i = 0; i < N; i++)
	{

		if (A[i] < 0)
		{
			sum += A[i];
			przv += A[i];

		}

	}

	cout << "sum " << sum << " przv " << przv++ << endl;
}



// More_masiv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	const int  N = 10;
	float A[N];
	int br = 0;
	float sum = 0;
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
		
		if (A[i] <0)
		{
			sum += A[i];
			br++;

		}

	}

cout << "sum " << sum << " br " << br++  << endl;
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

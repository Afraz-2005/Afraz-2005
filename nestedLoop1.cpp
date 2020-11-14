#include <iostream>
using namespace std;

int main()
{
	int row = 4;
	/*Mirrored right angle triangle*/
	for (int i = 1; i <= row; i++)
	{
		for (int j = row - 1; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	/*reversed mirrored right angle triangle*/
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i; j <= row; j++)
		{
			cout << "*";
		}
		cout << "\n";

	}
}

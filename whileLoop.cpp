#include<iostream>
using namespace std;

void even()
{

	int i = 2;
	while (i <= 10)
	{
		cout << " " << i << "\t";
		i = i + 2;
	}
}

void odd()
{

	int i = 1;
	while (i <= 10)
	{
		cout << " " << i << "\t";
		i = i + 2;
	}
}


void main() 
{
	
	cout << "::::::::::::::::EVEN NUMBERS::::::::::::::::\n" << endl;
	even();
	cout << "\n\n::::::::::::::::::::::::::::::::::::::::::::\n" << endl;


	cout << "\n::::::::::::::::ODD NUMBERS:::::::::::::::::\n" << endl;
	odd();
	cout << "\n\n::::::::::::::::END OF PROGRAM::::::::::::::" << endl;
}

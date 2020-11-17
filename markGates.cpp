#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "::::::::::::::::Make A List:::::::::::\n" << endl;

	string todo[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "     Enter ToDo " << i + 1 << ": ";
		getline(cin, todo[i]);
	}

	cout << "\n::::::::::::::ToDo List:::::::::::::::\n" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout <<"     "<< i + 1 << ". " << todo[i] << endl;
	}

	cout << "\n:::::::::::::END OF PROGRAM:::::::::::" << endl;

	return 0;
}

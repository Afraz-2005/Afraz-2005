#include <iostream>
#include <string> 

using namespace std;

int check()
{
	string userName;
	string passWord;

	cout << "\nSet username (more than 5 characters and less than 9 characters): ";
	cin >> userName;

	if (userName.length() > 5 && userName.length() < 9)
	{
		cin.ignore();
		cout << "Set password (8 characters long): ";
		getline(cin, passWord);

		if (passWord.length() < 8)
		{
			cout << "\n------------| Welcome |----------------" << endl;
		}

		else 
		{
			cout << "\nPassword must be less than 8 characters." << endl;
		}

	}

	else
	{
		cout << "\nUsername must be 6 characters long." << endl;
	}


	string name;
	int age;
	string occupation;

	cout << "\nWelcome to introduction. Please introduce yourself" << endl;
	cin.ignore();

	cout << "\nEnter your full name: ";
	getline(cin, name);

	cout << "Enter your age: ";
	cin >> age;

	cin.ignore();
	cout << "Enter your occupation: ";
	getline(cin, occupation);

	cout << "\nHi " << name << ", " << endl;
	cout << "You are " << age << " years old" << endl << "You are a " << occupation << "\n";

	
	return 0;
}


int main()
{
	cout << "\n~~~~~~~~~~~Simple Check and View app~~~~~~~~~~~~~" << endl;

	check();
	
}

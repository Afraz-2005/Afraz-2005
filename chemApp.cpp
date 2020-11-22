#include <iostream>
#include <string> 

using namespace std;

int check()
{
	string userName;
	string passWord;
	char yn;
	string round;

	cout << "\nSet username: ";
	cin >> userName;

	cin.ignore();
	cout << "Set password: ";
	getline(cin, passWord);

	if (passWord.length() < 8)
	{
		while (true)
		{
			cout << "\n------------| Welcome |----------------" << endl;
			string name;
			int age;
			string occupation;

			cout << "\nWelcome to introduction. Please introduce yourself" << endl;

			cin.ignore();
			cout << "Enter your full name: ";
			getline(cin, name);

			cout << "Enter your age: ";
			cin >> age;

			cin.ignore();
			cout << "Enter your occupation: ";
			getline(cin, occupation);

			cout << "\nHi " << name << ", " << endl;
			cout << "You are " << age << " years old" << endl << "You are a " << occupation << "\nNice to meet you!" << "\n";

			cout << "\nDo you want to replay or stop? ";
			cin >> round;

			if (round == "replay")
			{
				continue;
			}
			else if (round == "stop")
			{
				break;
			}
			else
			{
				cout << "\nInvalid input. Start from the beginning\n";
				continue;
			}
		}

	}

	else 
	{
		cout << "\nPassword must be less than 8 characters." << endl;
	}
	
	return 0;
}


int main()
{
	cout << "\n~~~~~~~~~~~Simple Check and View app~~~~~~~~~~~~~" << endl;
	check();
	cout << "\n~~~~~~~~~~~~~~~~End of program~~~~~~~~~~~~~~~~~~~" << endl;
}

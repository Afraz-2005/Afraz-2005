#include <iostream>
using namespace std;

int main() {

	while (true)
	{
		char choice;
		cout << ":::| 1.Denary to Binary converter | 2.Checksum Calculator|:::\n";
		cout << "\n\tEnter your choice: ";
		cin >> choice;

		if (choice == '1')
		{
			cin.ignore();
			cout << "\n\tPress any key to continue...\n";
			cin.ignore();

			int binary[10], num, i;

			cout << "\tDenery to Binary converter\n";
			cout << "\t**************************\n";
			cout << "\n\tInput a denary number: ";
			cin >> num;

			for (i = 0; num > 0; i++)
			{
				binary[i] = num % 2;
				num = num / 2;
			}

			cout << "\tBinary value = ";

			for (i = i - 1; i >= 0; i--)
			{
				cout << binary[i];
			}
			char cn;
			cout << "\n\tDo u want to continue. y/n? ";
			cin >> cn;
			cout << "\n\n";

			if (cn == 'y')
			{
				continue;
			}
			else if (cn == 'n')
			{
				break;
			}

		}

		else if (choice == '2')
		{
			int i, div, mul, subs, res;

			cin.ignore();
			cout << "\n\tPress any key to continue...\n";
			cin.ignore();

			cout << "\tChecksum Calculator\n";
			cout << "\t*******************\n";

			cout << "\n\tInput a number: ";
			cin >> i;

			div = i / 265;
			mul = div * 256;
			subs = i - mul;

			cout << "\tChecksum = " << subs << endl;

			char cn;
			cout << "\n\tDo u want to continue. y/n? ";
			cin >> cn;
			cout << "\n\n";

			if (cn == 'y')
			{
				continue;
			}
			else if (cn == 'n')
			{
				break;
			}
			
		}

	
	}

	
	

}
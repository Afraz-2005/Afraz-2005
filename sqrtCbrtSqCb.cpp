#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while (true)
	{
		int a;
		int select;
		char x;
		double result;
		cout << "Calculators : | 1) Square | 2) Cube | 3) Square Root | 4) Cube Root |" << endl;
		cout << "\nSelect Calculator Number : ";
		cin >> select;


	
		if (select == 1)
		{
			cout << "\n    | SQUARE CALCULATOR |" << endl;
			cout << "\n    Enter number : ";
			cin >> a;
			result = a * a;
			cout << "\n    " << a << " squared = " << result << endl;

			cout << "\n    Do you wnat to continue ? [ y/n ] : ";
			cin >> x;
			cout << endl;
			if (x == 'y')
			{
				continue;
			}
			else if (x == 'n')
			{
				cout << ":::::::::::::END OF OPERATION:::::::::::::::" << endl;
				break;
			}
			else
			{
				cout << "    invatid! Please Check.";
				break;
			}

		}
		else if (select == 2)
		{
			cout << "\n    | CUBE CALCULATOR |" << endl;
			cout << "\n    Enter number : ";
			cin >> a;
			result = a * a * a;
			cout << "\n    " << a << " Cubed = " << result << endl;

			cout << "\n    Do you wnat to continue ? [ y/n ] : ";
			cin >> x;
			cout << endl;
			if (x == 'y')
			{
				continue;
			}
			else if (x == 'n')
			{
				cout << ":::::::::::::END OF OPERATION:::::::::::::::" << endl;
				break;
			}
			else
			{
				break;
				cout << "    invatid! Please Check.";
			}
		}
		else if (select == 3)
		{
			cout << "\n    | SQUARE ROOT CALCULATOR |" << endl;
			cout << "\n    Enter number : ";
			cin >> a;
			result = sqrt(a);
			cout << "\n    " << a << " Square Root = " << result << endl;

			cout << "\n    Do you wnat to continue ? [ y/n ] : ";
			cin >> x;
			cout << endl;
			if (x == 'y')
			{
				continue;
			}
			else if (x == 'n')
			{
				cout << ":::::::::::::END OF OPERATION:::::::::::::::" << endl;
				break;
			}
			else
			{
				break;
				cout << "    invatid! Please Check.";
			}
		}
		else if (select == 4)
		{
			cout << "\n    | SQUARE ROOT CALCULATOR |" << endl;
			cout << "\n    Enter number : ";
			cin >> a;
			result = cbrt(a);
			cout << "\n    " << a << " Cube Root = " << result << endl;

			cout << "\n    Do you wnat to continue ? [ y/n ] : ";
			cin >> x;
			cout << endl;
			if (x == 'y')
			{
				continue;
			}
			else if (x == 'n')
			{
				cout << ":::::::::::::END OF OPERATION:::::::::::::::" << endl;
				break;
			}
			else
			{
				break;
				cout << "    invatid ! Please Check.\n";
			}

		}
		else
		{
			cout << "\n    invalid input! Please check !\n";
		}
		cout << endl;
	}

}

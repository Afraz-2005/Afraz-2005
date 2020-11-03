#include <iostream>
using namespace std;

int main()
{
    cout << "========BASIC CALCULATOR=========" << endl;
    cout << "\nSELECT OPERATOR | + | - | * | / |" << endl;
    cout << "---------------------------------" << endl;

    int a;
    int b;
    char op;
    double answer; 

    while (true)
    {
        cout << "     Enter your operator : " ;
        cin >> op;
        cout << "     ---------------------" << endl;       
        cout << "     Enter first number -- " ;
        cin >> a;
        cout << "     ------------------" << endl;
        cout << "     Enter second number -- ";
        cin >> b;
        cout << "     -------------------" << endl;
         
        if (op == '+')
        {
            answer = a + b;
            cout <<"     "<< a << " + " << b <<" = "<< answer << endl;
            char c;
            cout << "     Do you want to continue |y||n| : ";
            cin >> c;
            if (c == 'y')
            {
                cout << "\n     please wait... " << endl;
            }
            else if (c == 'n')
            {
                cout << "\n===========END OF RESULTS==========";
                break;
            }
            else
            {
                cout << "     | Invalid choice. Please check! |" << endl;
            }
        }

        if (op == '-')
        {
            answer = a - b;
            cout <<"     "<< a << " - " << b <<" = "<< answer << endl;
            char c;
            cout << "     Do you want to continue |y||n| : ";
            cin >> c;
            if (c == 'y')
            {
                cout << "\n    please wait... " << endl;
            }
            else if (c == 'n')
            {
                cout << "\n===========END OF RESULTS==========";
                break;
            }
            else
            {
                cout << "     | Invalid choice. Please check! |" << endl;
            }
        }

        if (op == '*')
        {
            answer = a * b;
            cout <<"     "<< a << " * " << b <<" = "<< answer << endl;
            char c;
            cout << "     Do you want to continue |y||n| : ";
            cin >> c;
            if (c == 'y')
            {
                cout << "\n     please wait... " << endl;
            }
            else if (c == 'n')
            {
                cout << "\n===========END OF RESULTS==========";
                break;
            }
            else
            {
                cout << "     | Invalid choice. Please check! |" << endl;
            }
        }

        if (op == '/')
        {
            answer = a / b;
            cout <<"     "<< a << " / " << b <<" = "<< answer << endl;
            char c;
            cout << "     Do you want to continue |y||n| : ";
            cin >> c;
            if (c == 'y')
            {
                cout << "\n     please wait... " << endl;
            }
            else if (c == 'n')
            {
                cout << "\n===========END OF RESULTS==========";
                break;
            }
            else
            {
                cout << "     | Invalid choice. Please check! |" << endl;
            }
        }

        
    }

}


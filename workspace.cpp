/////////////////////////////// START OF PROGRAM /////////////////////////

#include <iostream>
using namespace std;

//main function
int main() {

    //taking variables
    int var1 = 0, var2 = 0, var3 = 0;

    cout << "\n\nEnter value for var1: "; //value input for var1
    cin >> var1;
    cout << "Address of var1: "<< &var1 << endl; //address output for var1

    cout << "\nEnter value for var2: "; //value input for var2
    cin >> var2;
    cout << "Address of var2: " << &var2 << endl; //address output for var2

    cout << "\nEnter value for var3: "; //value input for var3
    cin >> var3;
    cout << "Address of var3: " << &var3 << endl; //address output for var3

    //taking pointers for each variables
    int* ptr_var1;
    int* ptr_var2;
    int* ptr_var3;

    //appointing variable addresses to each pointers
    ptr_var1 = &var1;
    ptr_var2 = &var2;
    ptr_var3 = &var3;

    //storing variable values and adresses
    cout << "\nData Stored: " << endl;
    cout << "\tvar1 = " << var1 << "[" << &var1 << "]" << endl;
    cout << "\tvar2 = " << var2 << "[" << &var2 << "]" << endl;
    cout << "\tvar3 = " << var3 << "[" << &var3 << "]" << endl << endl;

    //variable to input allocation size
    int var_size;
    //pointer to input numbers to allocate 
    int *ptr;

    cout << "Size: ";
    cin >> var_size;
    cout << endl << endl;

    //if-else condition statement
    if (var_size == var_size){

        ptr = new int[var_size];
    
        for(int i = 0; i < var_size; i++){
            cin >> ptr[i];
        }
        for(int i = 0; i < var_size; i++){
            cout << "\n[Allocated]: " << ptr[i] << endl;
        }
    }
    else{
        cout << "Invalid input!.";
    }

    return 0;
///////////////////////////////// END OF PROGRAM /////////////////////////////////
}
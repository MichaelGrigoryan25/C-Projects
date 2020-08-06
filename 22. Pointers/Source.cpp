#include <iostream>
using namespace std;

int main()
{
	int age = 15;
	int *pAge = &age;           // Pointer variable
	string name = "Mike";
    string *pName = &name;      // Pointer variable

    // Printing the address of age variable age on the hardware level
	cout << "Age: "<<addressof(age) << endl; // Memory address in computer RAM(Random access memory)
    cout << "Age: " << &age << endl; // Same thing

    // Printing the address of name variable age on the hardware level
	cout << "Name: " << addressof(name) << endl; // Memory address in computer RAM(Random access memory)
    cout << "Name: " << &name << endl; // Same thing

    // Dereferencing a pointer
    cout << *pName << endl;     // Dereferencing a pointer
    cout << *pAge << endl;      // Dereferencing a pointer

	return 0;
}

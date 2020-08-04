#include <iostream>
#include <cmath>
#include <string> // Library to work with strings

using namespace std;

int main()
{
	string name;

	cout << "Enter your name: ";
	
	getline(cin, name); // getline() from <string> module
	
	cout << "Hello " << name;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int index = 1;

	// While Loop
	while (index <= 5)
	{
		cout << index << endl;
		index++;
	}

	// Do While Loop (reversed)
	do
	{
		cout << index << endl;
		index++;
	} while (index <= 5);
	return 0;
}
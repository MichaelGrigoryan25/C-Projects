#include <iostream>

using namespace std;
int main()
{
	int numberGrid[3][2] = 
	{
		// First Array
		{
			1, 2
		},
		// Second Array
		{
			3, 4
		},
		// Third array
		{
			5, 6
		}
	};

	cout << numberGrid[0][0] << endl; // Will print 1
	
	// Nested Loops

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << numberGrid[i][j];
		}
		cout << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int secret = 10;
	int guess = 0;

 	while (secret!=guess)
	{
		cout << "Enter the Number: ";
		cin >> guess;
	}

	cout << "You Win!";

	return 0;
}
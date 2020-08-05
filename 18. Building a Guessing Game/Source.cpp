#include <iostream>
using namespace std;

int main()
{
	int secret = 10;
	int guess{};
	int guessCount = 0;
	int guessLimit = 3;
	bool oog = false; // Out of guesses

	while (secret != guess && !oog) 
	{
		if(guessCount < guessLimit)
		{
			cout << "Enter the Number: ";
			cin >> guess;
			guessCount++;
		}
		else {
			oog = true;
		}

	};

	if (oog)
	{
		cout << "You Lose";
	}
	else
	{
		cout << "You Win!";
	}

	return 0;
}
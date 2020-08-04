#include <iostream>
using namespace std;

int main()
{
	string gender;
	string tAnswer;
	bool tall;

	cout << "Enter your gender: ";
	cin >> gender;

	cout << "Are you tall?: ";
	cin >> tAnswer;
	
	if (tAnswer == "Yes")
	{
		tall = true;
	}
	else {
		tall = false;
	}

	if(gender=="Male" && tall)
	{
		cout << "You're a tall Male";
	}
	else
	{
		cout << "You're short and not a male";
	}

	return 0;
}
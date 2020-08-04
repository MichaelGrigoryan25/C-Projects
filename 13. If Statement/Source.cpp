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

	if(gender=="Male" && tall) // Both Should Be True
	{
		cout << "You're a tall Male";
	}
	else if (gender=="Female" && tall) {
		cout << "You're a tall Female";
	}
	else
	{
		cout << "You're short and not a male or female";
	}

	return 0;
}

///////////////
// IMPORTANT //
///////////////

//if(arg1 && arg2) 
//{
	//cout << "Hello";
//}	//both args should be true in order to print hello

//if(arg1 || arg2) 
//{
//	cout << "Hello";
//}	// One arg should be true in order to print hello


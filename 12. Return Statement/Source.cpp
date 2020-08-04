#include <iostream>
using namespace std;

double cubic(double num)
{
	// Or we can do that like this
	// double dummyRes1 = num * num * num;
	// return dummyRes1
	// Or
	//
	// double dummyRes2 = pow(num, 3);
	// cout << dummyRes2;

	return pow(num, 3);

	cout << "This is not gonna show up"; // This line won't show up becuase it's below return statement
}

int main()
{
	cout << cubic(5.0);

	return 0;
}
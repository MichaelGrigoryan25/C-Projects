#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	cout << sqrt(36);	 // Square root
	cout << pow(3, 2);	 //  3 ^ 2
	cout << round(4.6);	 // Round a number (Follows normal rounding rules) -> Will round 4.6 -> 5.0
	cout << floor(4.3);	 // Will round the number down
	cout << ceil(4.35);	 // Will round the number up
	cout << fmax(3, 10); // Will return the bigger number. In this case --> 10
	cout << fmin(3, 10); // Will return the smallest number

	return 0;
}
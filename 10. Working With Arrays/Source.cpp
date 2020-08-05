#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int limitedArray[4] = {1};			 // Only able to store 4 objects
	int unlimitedArray[] = {1, 2, 3, 4}; // Regular, not limited array
	cout << unlimitedArray[0] << endl;	 // Will print 1
	cout << limitedArray[0] << endl;	 // Will print first array element

	return 0;
}
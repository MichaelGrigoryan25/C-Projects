#include <iostream>
using namespace std;

int main()
{
	int nums[] = {1, 2, 5, 7, 3};

	for (int i = 0; i < 5; i++) // Will loop 5 times, i = 0 -> i < 5
	{
		cout << nums[i] << endl;
		// 1
		// 2
		// 5
		// 7
		// 3
	}

	return 0;
}
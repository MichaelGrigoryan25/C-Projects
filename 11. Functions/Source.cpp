#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void sayHi(string name, int  age); // Declaring the function. C++ can't read code that is below main() but we can tell C++ that it exists.

int main()	// <- main() is a function. Similar to Kotlin, Python and JS
{	

	sayHi("Mike", 15); // Calling the fucntion(similar to js, Kotlin, Python)
	sayHi("Tom", 17);
	sayHi("Jerry", 19);
	return 0;
}

void; // This is a function that is not going to do anything

void sayHi(string name, int age) { // When we call this function it will return Hello User
	cout << "Hello " << name << ". You are " << age << endl;
}
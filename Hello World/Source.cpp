//
#include <iostream>

//
using namespace std;

// This block will get executed first. Then eveything in it.
int main() {

    ///////////////////////////////////////
   //          Using Variables          //
  ///////////////////////////////////////
    string MyName;
    int MyAge;

    // Define Variable Values
    MyName = "Mike";
    MyAge = 15;

    // Print the line
    cout << "Hello my name is " << MyName << ". I'm " << MyAge << " years old." << endl;

    //----------------------------------------------------------------------------------

    ///////////////////////////////////////
   //            Data Types             //
  ///////////////////////////////////////

    char grade = 'A'; // Character
    string phrase = "Michael Grigoryan"; // String
    int age = 50; // Integer Number
    float g = 9.8; // Decimal(Floating) Number
    double gpa = 4.5; // Very Specific Number 
    bool  isMale = true; // Boolean(true/false)

    cout << NULL << endl;


    ///////////////////////////////////////
   //     Working With Strings          //
  ///////////////////////////////////////

    string Hello = "Hello"; // Variable Hello

    cout << Hello.substr(0, 3) << endl; // This will create a new string based on spcified index range (0, 3) = (1,2,3,4)
    cout << Hello.find("H") << endl;  // This is going to return the index position of letter "H"
    cout << Hello[0] << endl; // Will print the string that is at index 0 -> "H"

    return 0;
}
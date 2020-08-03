#include <iostream>

using namespace std;
int main()
{
    ///////////////////////////////////////
   //     Working With Strings          //
  ///////////////////////////////////////

  string Hello = "Hello"; // Variable Hello

  cout << Hello.substr(0, 3) << endl; // This will create a new string based on spcified index range (0, 3) = (1,2,3,4)
  cout << Hello.find("H") << endl;    // This is going to return the index position of letter "H"
  cout << Hello[0] << endl;           // Will print the string that is at index 0 -> "H"

  return 0;
}
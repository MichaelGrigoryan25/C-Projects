#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        string major;
        int age;

        Student(string aName, string aMajor, int aAge)
        {
            name = aName;
            major = aMajor;
            age = aAge;
        }

        bool isFivteen()
        {
            if(age <= 15)
            {
                return true;
            }
            return false;
        }

};

int main()
{
    Student Michael("Mike", "Computer Science", 15);
    Student Jake("Jake", "Business", 19);

    cout << Michael.isFivteen() << endl;
    cout << Jake.isFivteen() << endl;

    return 0;
}

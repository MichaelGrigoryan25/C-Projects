#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;
    book1.title = "Super";
    book1.author = "Michael Grigoryan";
    book1.pages = 1234;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    return 0;
}

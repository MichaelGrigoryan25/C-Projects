#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    Book book1("Super","Michael Grigoryan",1234);

    cout << book1.author;

    return 0;
}

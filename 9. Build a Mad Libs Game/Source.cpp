#include <iostream>
#include <string>

using namespace std;

int main()
{
	string color, pluralNoun, celebrity;

	cout << "Color: ";
	getline(cin, color);

	cout << "Plural Noun: ";
	getline(cin, pluralNoun);

	cout << "Celebrity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << endl;
	cout << pluralNoun <<" are blue" << endl;
	cout << "I love " << celebrity << endl;
}
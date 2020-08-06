#include <iostream>
using namespace std;

class Chef
{
public:

    void makeChicken()
    {
        cout << "Chef makes chicken" << endl;
    }

    void makeSalad()
    {
        cout << "Chef makes salad" << endl;
    }
    void makeSDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

class IChef : public Chef // Gets all the code from the first chef
{
    public:
        void makeS()
        {
            cout << "Chef makes spaghetti" << endl;
        }
        void makeSDish()
        {
            cout << "The chef makes beacon" << endl; // Overwriting the inherited function
        }
};

int main()
{
    Chef chef;
    chef.makeChicken();

    IChef ichef;
    ichef.makeS();

    return 0;
}

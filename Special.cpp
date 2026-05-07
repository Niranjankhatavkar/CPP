#include <iostream>
using namespace std;

class Demo
{

public:
    int i;   // Characteristics
    float f; // Characteristics

    Demo()  //Constructor
    {
        cout << "Inside Constructor\n";
        i = 0;
        f = 0.0f;
    }

    ~Demo() //Destructor
    {
        cout << "Inside Destructor\n";
    }

    void fun() // Behaviour
    {
        cout << "Inside Fun\n";
    }
};

int main()
{
    cout << "Inside main\n";

    Demo dobj;  //Object Creation

    cout << dobj.i << "\n";

    dobj.fun();

    cout << "End of main\n";
    

        return 0;
}


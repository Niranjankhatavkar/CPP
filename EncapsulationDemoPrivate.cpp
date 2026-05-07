#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    // Access Specifier(By Default private)
    
    int No1,No2;    // Characteristics

    void fun()      // Behaviour
    {
        cout<<"Inside Fun\n";    
    };

    void gun()      // Behaviour
    {
        cout<<"Inside Gun\n";
    };
};

int main(){

    // Object Creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;
    cout<<sizeof(mobj1)<<"\n";    // 8 

    cout<<mobj1.No1<<"\n";

    mobj1.fun();
    mobj2.fun();

    mobj1.gun();

    return 0;
}
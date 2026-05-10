#include<iostream>
using namespace std;

class Demo{

    public:

    int A, B;

    Demo(int i, int j){

        A=i;
        B=j;
    }

    void Maximum()
    {

        if(A>B){
            cout<<"A is greater than B\n";
        }

        else
        {
            cout<<"B is greater than A";
        }
    }


};

int main(){

    Demo obj1(10,11);

    obj1.Maximum();


    return 0;
}
#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Gun of derived\n";
        }
};

int main()
{
    Derived *ptr = NULL;
    ptr = new Derived;

    ptr -> Fun();
    ptr -> Gun();

    delete ptr;

    return 0;
}
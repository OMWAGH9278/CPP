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

class DerivedX : public Derived
{
    public:
        int i,j;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }

        void Sun()
        {
            cout<<"Inside Sun of DerivedX\n";
        }
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";

    DerivedX dxobj;

    dxobj.Fun();
    dxobj.Gun();
    dxobj.Sun();

    // Derived *ptr = NULL;
    // ptr = new Derived;

    // ptr -> Fun();
    // ptr -> Gun();

    // delete ptr;

    return 0;
}
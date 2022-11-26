#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;

        Base1()
        {
            cout<<"Inside Base1 Constructor\n";
        }
         ~Base1()
        {
            cout<<"Inside Base1 Destructor\n";
        }
         void Fun()
        {
            cout<<"Inside Fun of Base1\n";
        }
};

class Base2
{
    public:
        int I,J,K;

        Base2()
        {
            cout<<"Inside Base2 constructor\n";
        }
        ~Base2()
        {
            cout<<"Inside Base2 destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Base2\n";
        }
};

class Derived : public Base1, public Base2
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Derived\n";
        }
};

int main()
{
    Derived dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

    return 0;
}
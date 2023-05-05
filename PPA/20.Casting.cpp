#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
};

class Derived : public Base
{
    public:
        int X,Y;
};

int main()
{
    Base * bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;     // No casting    Allowed
    dp = &dobj;     // No casting    Allowed
    bp = &dobj;     // Upcasting     Allowed
    // dp = &bobj;  // Downcasting   Not Allowed

    return 0;
}
#include <iostream>
using namespace std;

// call by reference
void swapi(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void swapd(double &x, double &y)
{
    double temp;

    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int a = 11, b = 10;

    cout<<"Value of a: "<<a<<"\n"; 
    cout<<"Value of b: "<<b<<"\n"; 

    swapi(a,b);

    cout<<"Value of a: "<<a<<"\n"; 
    cout<<"Value of b: "<<b<<"\n"; 

    double p = 11.9, q = 10.7;

    cout<<"Value of p: "<<p<<"\n"; 
    cout<<"Value of q: "<<q<<"\n"; 

    swapd(p,q);

    cout<<"Value of p: "<<p<<"\n"; 
    cout<<"Value of q: "<<q<<"\n"; 

    return (0);
}

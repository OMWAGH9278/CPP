#include <iostream>
using namespace std;

double addition(double i, double j)
{
    double ans = 0.0;
    ans = i + j;

    return (ans);
}

int main(void)
{
    double a = 11.9, b = 10.1, ret = 0;

    ret = addition(a,b);

    cout<<"Addition is: "<<ret<<"\n";

    return (0);
}

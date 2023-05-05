#include <iostream>
using namespace std;

template <class T> 
T addition(T i, T j)
{
    T ans;
    ans = i + j;

    return (ans);
}

int main(void)
{
    double a = 11.9, b = 10.1, ret = 0;
    ret = addition(a,b);
    cout<<"Addition is: "<<ret<<"\n";

    int x = 11, y = 10, iret = 0;
    iret = addition(x,y);
    cout<<"Addition is: "<<iret<<"\n";

    return (0);
}

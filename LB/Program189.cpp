#include <iostream>
using namespace std;

int addition(int i, int j)
{
    int ans = 0;
    ans = i + j;

    return (ans);
}

int main(void)
{
    int a = 11, b = 10, ret = 0;

    ret = addition(a,b);

    cout<<"Addition is: "<<ret<<"\n";

    return (0);
}

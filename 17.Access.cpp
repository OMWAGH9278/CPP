#include<iostream>
using namespace std;

class Base
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Value of public i "<<i<<"\n";
            cout<<"Value of private j "<<j<<"\n";
            cout<<"Value of protected k "<<k<<"\n";
        } 
};

int main()
{
    Base bobj;
    cout<<"Value of public i : "<<bobj.i<<"\n";
    //cout<<"Value of private j : "<<bobj.j<<"\n";
    //cout<<"Value of protected k : "<<bobj.k<<"\n";

    bobj.fun();

    return 0;
}
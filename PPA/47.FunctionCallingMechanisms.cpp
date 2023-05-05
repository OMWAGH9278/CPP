#include<iostream>
using namespace std;

void fun(int no)  // Call by value
{
    cout<<"Inside Call by value : "<<no<<"\n";
    no++;
}
void gun(int *p)  // Call by address
{
    cout<<"Inside Call by address : "<<*p<<"\n";
    (*p)++;
}
void sun(int &ref)  // Call by reference 
{
    cout<<"Inside Call by reference : "<<ref<<"\n";
    ref++;
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);   // fun(10);
    cout<<i<<"\n";
    gun(&j);  // gun(200);
    cout<<j<<"\n";
    sun(k);   // sun(k);
    cout<<k<<"\n";

    return 0;
}
#include <iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
};

// + is an operator overloaded function which
// accepts two parameters and both are objects of
// Demo class
// this function returns the object of Demo class

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}
int main()
{
    Demo Y(10,20);        
    Demo X(30,40);    
    Demo Ans; 

    Ans = X + Y;        // +(X,Y);

    cout<<Ans.A<<"\n";
    cout<<Ans.B<<"\n";

    return 0;
}
#include <iostream>
using namespace std;

class Demo
{
    public:
        int iNo1;
        int iNo2;

        Demo(int A = 0, int B = 0)
        {
            iNo1 = A;
            iNo2 = B;
        }
        void Display()
        {
            cout<<iNo1<<"\n";
            cout<<iNo2<<"\n";
        }
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside Operator +\n";
    return Demo(obj1.iNo1+obj2.iNo1, obj1.iNo2+obj2.iNo2);
}

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans;

    Ans = X + Y;
    Ans.Display();

    return 0;
}
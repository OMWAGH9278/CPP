#include <iostream>
using namespace std;

class Demo
{
    private:
        int A,B;
    public:    
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
        void Display()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
        }
        friend Demo operator +(Demo, Demo);
};

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
    Ans.Display();

    return 0;
}
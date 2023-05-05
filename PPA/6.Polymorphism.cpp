#include<iostream>
using namespace std;

class Overloading
{
    public:
        int Add(int a, int b)
        {
            cout<<"Addition of Integers\n";
            return a+b;
        }

        float Add(float a, float b)
        {
            cout<<"Addition of Floats\n";
        }

        double Add(double a, double b)
        {
            cout<<"Addition of Doubles\n";
        }

        int Add(int a, int b, int c)
        {
            cout<<"Addition of 3 Integers\n";
        }

        void Fun(int a, float b)
        {}

        void Fun(float x, int y)
        {}
};

int main()
{
    Overloading obj;
    int i;
    float f;
    double d;

    i = obj.Add(11,21);
    i = obj.Add(11,21,51);
    f = obj.Add(10.9f,89.5f);
    d = obj.Add(10.9,89.5);

    return 0;
}
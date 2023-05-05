#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        const int k;
        static const int l = 21;
        // Default constructor
        Demo() : k(11)
        {
            i = 51;
            j = 101;
        }
        // Parametrised constructor
        Demo(int a, int b, int c) : k(c)
        {
            i = a;
            j = b;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20,30);
    // obj1.k++;  NA
    // obj2.k++;  NA
    obj1.i++;
    obj2.i++;

    return 0;
}


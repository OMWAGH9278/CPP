#include<iostream>
using namespace std;

class Demo
{
    public:
        void fun(int *p)
        {
            cout<<"First defination";
        }
        void fun(float *p)
        {
            cout<<"Second defination";
        }
        void fun(int no)
        {
            cout<<"Third defination";
        }
};

int main()
{
    int no = 11;
    float f = 3.14;

    Demo obj;

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);

    return 0;
}
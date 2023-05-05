#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int no1;
        int no2;
        Arithmetic()
        {
            no1 = 0;
            no2 = 0;
        }
        Arithmetic(int value1, int value2)
        {
            no1 = value1;
            no2 = value2;
        }
        ~Arithmetic()
        {}
        int Maximum()
        {
            if(no1>no2)
            {
                return no1;
            }
            else
            {
                return no2;
            }
        }
};

int main()
{
    int i = 0;
    int j = 0;
    int max = 0;

    cout<<"Enter first number : \n";
    cin>>i;
    cout<<"Enter first number : \n";
    cin>>j;

    Arithmetic aobj(i,j);
    max = aobj.Maximum();
    cout<<"The maximum number is : "<<max<<"\n";
    
    return 0;
}
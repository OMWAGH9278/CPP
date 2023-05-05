#include<iostream>
using namespace std;

class Maths                                 // Class Declaration
{
    public:                                 // Access Specifier
        int iNo1;                           // Characteristics
        int iNo2;                           // Characteristics
    Maths()                                 // Constructor(Default)
    {
        cout<<"Inside Constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }
    Maths(int A, int B)                     // Constructor(Parametrised)
    {
        cout<<"Inside Constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
    ~Maths()                                // Destructor
    {
        cout<<"Inside Destructor\n";
    }
    // int Addition(Maths *this)
    int Addition()                          // Behaviour
    {
        return iNo1 + iNo2;
    }
    // int Substraction(Maths *this)
    int Substraction()                      // Behaviour
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    cout<<"Inside Main function\n";
    int ret = 0;

    Maths mobj1;
    Maths mobj2(11,10);

    ret = mobj2.Addition();                 // ret = Addition(&mobj2)  ==  ret = Addition(200)
    cout<<"Addition is :  "<<ret<<"\n";

    ret = mobj1.Substraction();             // ret = Substraction(&mobj1) == ret = Substraction(100)
    cout<<"Substraction is :  "<<ret<<"\n";

    return 0;
}
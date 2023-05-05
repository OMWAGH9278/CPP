#include<iostream>
using namespace std;

class Maths                                 // Class Declaration
{
    public:                                 // Access Specifier
        int iNo1;                           // Characteristics
        int iNo2;
        int ret;                           // Characteristics
        Maths()                                 // Constructor(Default)
        {
            iNo1 = 10;
            iNo2 = 11;
            ret = this->Addition();
            cout<<"Addition is :  "<<ret<<"\n";
        }
        ~Maths(){}                                // Destructor
        int Addition()                          // Behaviour
        {
            return iNo1 + iNo2;
        }
};

int main()
{
    Maths mobj1;
    return 0;
}
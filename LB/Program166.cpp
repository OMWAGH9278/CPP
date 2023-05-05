#include<iostream>
using namespace std;

class Arithmatic
{
    public:                    // Access Specifier
        int iValue1, iValue2;  // Characteristics

        Arithmatic()  // Default Constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }
        Arithmatic(int A, int B)  // Parametrised Constructor
        {
            iValue1 = A;
            iValue2 = B;
        }

        int Addition()
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};

int main()
{
    int iRet = 0;

    Arithmatic aobj1;
    Arithmatic aobj2(10,11);
    Arithmatic aobj3(20,21);

    iRet = aobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";  // 0

    iRet = aobj2.Addition();
    cout<<"Addition is : "<<iRet<<"\n";  // 21

    iRet = aobj3.Addition();
    cout<<"Addition is : "<<iRet<<"\n";  // 41

    return 0;
}
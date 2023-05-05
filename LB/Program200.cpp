#include <iostream>
using namespace std;

template <class T>
void Display(T arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; ++iCnt)
    {
        cout<<arr[iCnt]<<"\n";
    }
}

int main(void)
{
    int iData[] = {10,20,30,40};
    Display(iData,4);

    char cData[] = {'a','b','c','d','v','q'};
    Display(cData,6);

    return (0);
}
#include <iostream>
using namespace std;

template <class T>
T summation(T arr[], int iSize)
{
    T sum = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; ++iCnt)
    {
        sum = sum + arr[iCnt];
    }

    return (sum);
}

int main(void)
{
    int iData[] = {10,20,30,40};
    int iRet = summation(iData,4);
    cout<<"Addition of integers : "<<iRet<<"\n";

    float fData[] = {90.2,8.46,73.97,87.37,19.79,264.39};
    float fRet = summation(fData,6);
    cout<<"Addition of floats : "<<fRet<<"\n";

    return (0);
}
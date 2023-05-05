#include <iostream>
using namespace std;

template <class T>
T maximum(T arr[], int iSize)
{
    T max = arr[0];
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; ++iCnt)
    {
        if(arr[iCnt] > max)
            max = arr[iCnt];
    }

    return (max);
}

int main(void)
{
    int iData[] = {21,38,52,25,65};
    int iRet = maximum(iData,5);
    cout<<"Maximum of integers : "<<iRet<<"\n";

    float fData[] = {90.2,8.46,73.97,87.37,19.79,24.39};
    float fRet = maximum(fData,6);
    cout<<"Maximum of floats : "<<fRet<<"\n";

    return (0);
}
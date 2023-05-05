#include <iostream>
using namespace std;

void Display(int arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; ++iCnt)
    {
        cout<<arr[iCnt]<<"\n";
    }
}

int main(void)
{
    int Data[] = {10,20,30,40};

    Display(Data,4);

    return (0);
}
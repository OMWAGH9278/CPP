#include<iostream>
using namespace std;

// Input :  789567   597768
// Output : Numbers are anagram

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency[10] = {0};
    bool Flag = true; 

    while(iNo1 != 0)
    {
        Frequency[(iNo1 % 10)]++;
        Frequency[(iNo2 % 10)]--;
        iNo1 = iNo1 / 10;
        iNo2 = iNo2 / 10;
    }

    for(int iCnt = 0; iCnt < 10; iCnt++)
    {
        if(Frequency[iCnt] != 0)
        {
            Flag = false;
            break;
        }
    }

    return Flag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram"<<"\n";       
    }
}
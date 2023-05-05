#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory of resources..\n";            
            iSize = i;
            arr = new int[iSize];  // arr = (int *)malloc(iSize * sizeof(int));
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources..\n";
            delete []arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of array :\n";

            for(int i = 0; i < iSize ; i++)
            {
                cin>>arr[i];  // scanf(%d, arr[i]);
            }
        }

        void Display()
        {
            cout<<"Elements of array are :\n";

            for(int iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cout<<arr[iCnt]<<"\t";  // printf(%d, arr[iCnt]);
            }
            cout<<"\n";
        }

};

class MarvellousLB : public ArrayX
{
    public:

        MarvellousLB(int i) : ArrayX(i)
        {}
    
        int Minimum()
        {
            int iMin = arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(arr[iCnt] < iMin)
                {
                    iMin = arr[iCnt];
                }
            }

            return iMin;
        }

};

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter size of array : "<<"\n";
    cin>>iLength;

    return 0;
}
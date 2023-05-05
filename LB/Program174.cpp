#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            arr = new int[iSize];  // arr = (int *)malloc(iSize * sizeof(int));
        }

        ~ArrayX()
        {
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

int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}
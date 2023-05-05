#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int* arr;
        int iSize;

        ArrayX(int i);

        void accept();
        void display();
};

ArrayX :: ArrayX(int i)
{
    iSize = i;
    arr = new int[iSize];
}
void ArrayX :: accept()
{
    cout<<"Enter elements of array:"<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>arr[iCnt];
    }
}
void ArrayX :: display()
{
    cout<<"Elements of array are:"<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<"\n";
    }
}

int main(void)
{
    ArrayX obj(5);
    obj.accept();
    obj.display();

    return (0);
}
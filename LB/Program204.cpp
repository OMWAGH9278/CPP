#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T* arr;
        int iSize;

        ArrayX(int i);

        void accept();
        void display();
};

template <class T>
ArrayX <T> :: ArrayX(int i)
{
    iSize = i;
    arr = new T[iSize];
}

template <class T>
void ArrayX <T> :: accept()
{
    cout<<"Enter elements of array:"<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>arr[iCnt];
    }
}

template <class T>
void ArrayX <T> :: display()
{
    cout<<"Elements of array are:"<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<"\n";
    }
}

int main(void)
{
    ArrayX <int> obj1(5);
    obj1.accept();
    obj1.display();

    ArrayX <double> obj2(5);
    obj2.accept();
    obj2.display();

    return (0);
}
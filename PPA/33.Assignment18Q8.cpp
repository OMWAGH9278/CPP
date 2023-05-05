#include<iostream>
using namespace std;

class Demo
{
    public:                   
        static int k;         // Public static characteristic
    private:  
        static int l;         // Private static characteristic
};

int Demo::k = 1;

int main()
 {
    cout<<"Value of k : "<<Demo::k<<"\n";
    
    return 0;
}
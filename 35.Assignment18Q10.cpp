#include<iostream>
using namespace std;

class Demo
{
    public:         
        static int k;   
        static int l;   
};

int Demo::k = 0;
int Demo::l = 0;

int main()
{
    cout<<"Value of k : "<<Demo::k<<"\n";           
    cout<<"Value of l : "<<Demo::l<<"\n";          
    
    return 0;
}
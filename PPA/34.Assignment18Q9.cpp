#include<iostream>
using namespace std;

class Demo
{
    private:  
        int i;                // Private non static characteristic
};

int Demo::i = 0;

int main()
 {
    cout<<"Value of k : "<<Demo::i<<"\n";
    
    return 0;
}
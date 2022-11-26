#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;

    p = new int [10];
    // p = (int *)malloc(10 * sizeof(int));

    // Use memory

    delete []p;
    // free(p);

    return 0;
}
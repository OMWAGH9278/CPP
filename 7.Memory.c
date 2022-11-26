#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];           // static memory allocation

    int *p = NULL;

    p = (int *)malloc(sizeof(int) * 5);

    // Use of memory

    free(p);

    // code

    return 0;    // memory of Arr gets deallocated at this point
}
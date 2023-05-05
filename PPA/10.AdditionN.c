/*
    Steps to develop the application
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide the programming language  (C/C++/Java/Python/____)
    Step 4: Write the program
    Step 5: Test the program
*/

// Accept N numbers from user and perform addtion

// Input
// Value of N = 5
// Values : 11 22 33 44 55

// Output
// Addition is : 165

// Algorithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from user
        Perform addition of all numbers
        Display the addition
    END
*/

#include<stdio.h>         // For printf and scanf
#include<stdlib.h>        // For malloc and free

//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N mumbers
//  Input :     N numbers
//  Output :    Addition
//  Author :    Om Mangesh Wagh
//  Date :      18 September 2022
//
//////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;     // Pointer to hold the address of arrray
    int iSize = 0;       // Variable to hold size of array
    int i = 0;           // Loop counter
    int iSum = 0;        // To hold addition

    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);

    // Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory allocation is successful\n");

    printf("Please enter the elements\n");

    //Take Input
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    // Perform Addition
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("Memory gets deallocated\n");

    return 0;
}
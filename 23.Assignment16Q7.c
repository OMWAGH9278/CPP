#include<stdio.h>

int maximum(int Value1, int Value2)
{
    if(Value1>Value2)
    {
        return Value1;
    }
    else
    {
        return Value2;
    }
}

int main()
{
    int no1 = 0;
    int no2 = 0;
    int max = 0;

    printf("Enter first number : \n");
    scanf("%d",&no1);
    printf("Enter second number : \n");
    scanf("%d",&no2);

    max = maximum(no1,no2);

    printf("The maximum number is : %d\n",max);

    return 0;
}

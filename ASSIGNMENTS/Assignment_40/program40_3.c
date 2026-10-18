#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 1)
    {
       return;
    }

    printf("%d\t" , iNo);
    Display(iNo - 1);
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}
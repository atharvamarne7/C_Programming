// Write a program which accepts range and display all even numbers in between that range 

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting number :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending  number :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
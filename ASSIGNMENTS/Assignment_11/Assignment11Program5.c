// Write a program which accepts range from user and display all numbers in between that range in reverse

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting number :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending  number :\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}
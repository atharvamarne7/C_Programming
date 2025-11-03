// Write a program to find the Even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
         iFact = iFact * iCnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Factorial of given number is : %d\n",iRet);

    return 0;
}
// Write a program to find the Odd factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if((iCnt % 2) != 0)
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

    iRet = Factorial(iValue);

    printf("Factorial of given number is : %d\n",iRet);

    return 0;
}
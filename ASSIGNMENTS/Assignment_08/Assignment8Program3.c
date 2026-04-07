// Write a program to find the factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
         iFact = iFact * iCnt;
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
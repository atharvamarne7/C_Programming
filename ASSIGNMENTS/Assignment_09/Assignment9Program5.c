// Write a program to find the difference between Odd factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
         iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);

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
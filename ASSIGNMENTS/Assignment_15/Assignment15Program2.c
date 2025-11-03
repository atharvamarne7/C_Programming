// Write a program which accepts number from user and return the count of odd digits



#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iFrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if ((iDigit % 2) != 0)     // Check if digit is Odd
        {
            iFrequency++;     // 4 found => increment
        }

         iNo = iNo / 10;
    }
    return iFrequency;
}

//Time Complexity : O(log N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);    

    return 0;
}

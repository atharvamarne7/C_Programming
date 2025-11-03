// Write a program which accepts accepts frequency of 2 int it


#include<stdio.h>

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iFrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if (iDigit == 2)     // Check if digit is 2
        {
            iFrequency++;     // 2 found => increment
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);    

    return 0;
}

// write a program which accepts number from user and return multiplication of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if(iDigit != 0)      // Ignore zeros
        {
            iMult = iMult * iDigit;
        }
        
         iNo = iNo / 10;
    }
    return iMult;
}

//Time Complexity : O(log N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);    

    return 0;
}

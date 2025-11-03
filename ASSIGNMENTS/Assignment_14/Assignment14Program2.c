#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
         iDigit = iNo % 10;

         if (iDigit == 0)     // Check if digit is zero
        {
            return TRUE;     // Zero found => return TRUE
        }

         iNo = iNo / 10;
    }
    return FALSE;
}

//Time Complexity : O(log N)

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains ZERO");
    }
    else
    {
        printf("There is no ZERO");
    }

    return 0;
}

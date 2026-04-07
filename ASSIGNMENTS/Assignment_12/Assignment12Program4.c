#include<stdio.h>
int Sum_Of_Factors(int iNo)
{
    int iCnt = 0, iSum = 0;

    printf(" Even Factors are : \n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
              printf("%d\n",iCnt);
              iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sum_Of_Factors(iValue);

    printf("Sum of Factors is : %d",iRet);

    return 0;
}



#include<stdio.h>
int CountFactors(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    printf("Factors are : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);

    printf("Total no.of factors are : %d",iRet);

    return 0;
}

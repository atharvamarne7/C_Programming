// Find sum of first N natural numbers

#include<stdio.h>

int SumNaturalNumbers(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum =iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d",&limit);

    if(SumNaturalNumbers(limit) != 0)
    {
    printf("sum of first %d natural numbers is : %d",limit,SumNaturalNumbers(limit));
    }
    
    return 0;
}

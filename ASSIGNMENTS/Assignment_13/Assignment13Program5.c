#include<stdio.h>

int SumEvenNumbers(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum =iSum + (2*iCnt);
    }
    return iSum;
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d",&limit);

    printf("Sum of first %d even numbers are : %d",limit,SumEvenNumbers(limit));

    
    return 0;
}

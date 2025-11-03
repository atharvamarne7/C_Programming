// print all odd numbers till N

#include<stdio.h>

void PrintOddNumbers(int iNo)
{
    int iCnt = 0;
    printf("Odd numbers are : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
        printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d",&limit);

    PrintOddNumbers(limit);

    return 0;
}

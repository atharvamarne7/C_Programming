// print all numbers from 1 to N

#include<stdio.h>

void print_Numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{

    int iLimit = 0;

    printf("Enter number : \n");
    scanf("%d",&iLimit);

    print_Numbers(iLimit);


    return 0;
}
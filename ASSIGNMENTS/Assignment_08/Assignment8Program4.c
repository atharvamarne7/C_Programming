// Write a program which acepts numeber from user and display its table

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        
       printf("%d \t",iNo*iCnt);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);


    return 0;
}
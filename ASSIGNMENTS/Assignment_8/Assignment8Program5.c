// Write a program which acepts numeber from user and display its table in Reverse order

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }
    
    for(iCnt =10 ; iCnt >= 1; iCnt--)
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
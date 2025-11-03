// Write aprogram which accepts number from user and display its digits in reverse order

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \t",iDigit);
        iNo = iNo / 10;
    }
}

// Time Complexity = O(log N)

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}
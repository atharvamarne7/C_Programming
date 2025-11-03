//Find largest of three numbers
#include<stdio.h>

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo3) && (iNo2>iNo1))
    {
        return iNo2;
    }
    
    else
    {
        return iNo3;
    }
}

int main()
{
    int iNum1 = 0, iNum2 = 0, iNum3 = 0, iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iNum1);

    printf("Enter second number : ");
    scanf("%d",&iNum2);

    printf("Enter third number : ");
    scanf("%d",&iNum3);

    iResult = FindLargest(iNum1,iNum2,iNum3);

    printf("Largest number is : %d",iResult);

    return 0;
}
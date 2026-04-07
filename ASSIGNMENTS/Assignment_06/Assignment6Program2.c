// Write a program which accepts a number from user and check weather it is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>


bool ChkGreater(int iNo)
{
    if(iNo < 100)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater than 100");
    }
    else
    {
        printf("It is Smaller than 100");
    }

    return 0;
}
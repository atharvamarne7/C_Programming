#include<stdio.h>
#include<stdbool>

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2)

    if(bRet==2)
    {
        printf("It is completely Divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }
       
    
    return 0;
}
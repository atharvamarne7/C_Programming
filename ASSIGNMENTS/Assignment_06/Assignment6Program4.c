// Write a program which accepts three numbers and print its multiplication

#include<stdio.h>


int MultiThree(int iNo1, int iNo2, int iNo3)
{
    int Mult = 1;
    int iCount = 0;

    if(iNo1 != 0)
    {
        Mult =Mult*iNo1;
    }
    else
    {
        iCount = iCount+1;
    }
    if(iNo2 != 0)
    {
        Mult =Mult*iNo2;
    }
    else
    {
        iCount = iCount+1;
    }
    if(iNo3 != 0)
    {
        Mult =Mult*iNo3;
    }
    else
    {
        iCount = iCount+1;
    }

    if(iCount == 3)
    {
        Mult = 0;
    }

    return Mult;
    
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the third number : \n");
    scanf("%d",&iValue3);

    iRet = MultiThree(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);



    return 0;
}
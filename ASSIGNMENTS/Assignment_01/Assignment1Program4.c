// Program to accept one number and check weather it is divisible by 5 or not

//////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                           // For input putput
#include<stdbool.h>                         // For bool datatype

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         CheckDivisible
//  Description :           Check divisoble by 5 or not
//  Input :                 Integer  
//  Output :                Boolean
//  Author :                Atharva Marne
//  Date :                  16/10/2025
//
//////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Teast cases are successfully handled by the application
//  
//////////////////////////////////////////////////////////////////////////////////
// Write a program which accepts number from user and display its multiplication of factors 

/////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     MultFact
//  Description :       It is used to display multiplication of factors
//  Input :             Integer
//  Output :            Integer
//  Author :            Atharva Marne
//  Date :              16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int mult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++ )
    {
        if(iNo % iCnt ==0)
        {
            mult = mult*iCnt;
        }
    }
    return mult;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("Multiplication is : %d\n",iRet);


    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  All test cases are successfully handled by the application
//  
//  Input : 12          Output : 144
//  Input : 13          Output : 1
//  Input : 10          Output : 10
/////////////////////////////////////////////////////////////////////////////////////
// Write a program which accepts number from user and return difference between summation of all its factors and non factors

/////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     FactDiff
//  Description :       It is used to display difference betweem Summation of factors and NonFactors
//  Input :             Integer
//  Output :            Integer
//  Author :            Atharva Marne
//  Date :              16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0 )                                    //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) ==0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact =iSumNonFact + iCnt;
        }
        
    }
    return iSumFact - iSumNonFact;
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

    iRet=FactDiff(iValue);
    printf("Difference is : %d\n",iRet);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//
//  All test cases are successfully handled by the application
//  
//  Input : 12          Output : -34
//  Input : 10          Output : -29
//  Input : -12         Output : -34
//  
/////////////////////////////////////////////////////////////////////////////////////
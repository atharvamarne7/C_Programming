// Write a program which accepts number from user and print even factors of that number


/////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayEvenFactors
//  Description :       Print even factors of number
//  Input :             Integer
//  Output :            Integer
//  Author :            Atharva Marne
//  Date :              16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)                            // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt== 0))
        {
            if((iCnt % 2) == 0)             // Nested if condition 
            {
                printf("%d\t",iCnt);
            }
           
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//
//  All test cases are successfully handled by the application
//  
//  Input : 24          Output : 1  2   4   6   8   12
//  Input : -36         Output : 2  4   6   12  18
//
/////////////////////////////////////////////////////////////////////////////////////
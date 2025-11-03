// Accept two numbers from user and display first number in second number of times

////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   To display first number in second number of times
//  Input :         Integer
//  Output :        Integer
//  Author :        Atharva Marne
//  Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo, int frequency)
{
    int iCnt = 0;                                   //To store result
    //Write updater

    if(frequency < 0)                               //updater
    {
        frequency = -frequency;
    }

    for(iCnt = 1; iCnt <= frequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}//End of Display

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("\nEnter frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);                         //Function call

    return 0;
}//End of main

////////////////////////////////////////////////////////////////////
//
//  Test cases are successfully handeled by application
//  input1 : 12      input2 : 5       output : 12  12  12  12  12
//  input1 : -2      input2 : 3       output : -2  -2  -2
//  input1 : 21      input2 : 3       output : 21  21  21
//  input1 : -2      input2 : 0       output : 
//
////////////////////////////////////////////////////////////////////
// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   if number is less than 10 then print "Hello" otherwise print "Demo"
//  Input :         integer
//  Output :        int
//  Author :        Atharva Marne
//  Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)                            
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);                        //Function call

    return 0;
}//End of main

////////////////////////////////////////////////////////////////////
//
//  Test cases are successfully handeled by application
//  input1 : 7                 output : Hello
//  input1 : 11                output : Demo
//  input1 : 1                output : Hello
//  input1 : 51                output : Demo
//
////////////////////////////////////////////////////////////////////
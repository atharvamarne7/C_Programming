/*
    Algorithm

    Start
        Accept first number as no1
        Accept first number as no2
        If the input is negative the convert it int positive
        perform addition of no1 and no2
        Display the addition on screen
    Stop    

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is udsed to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Atharva Vitthal Marne
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(
                            float fNo1,                  // First Input
                            float fNo2                   // Second Input
                        )
{
  float fSum = 0.0f;                                    // To store the result
  
  if(fNo1 < 0.0f)                                       //Updator
  {
    fNo1=-fNo1;
  }

  if(fNo2 < 0.0f)                                      //Updator
  {
    fNo2 = -fNo2;
  }

  fSum= fNo1 + fNo2;                                  //Business Logic
  return fSum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the appliction 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;          // To accept user input
    float fRet = 0.0f;                             // To store the result
   
    printf("Enter First Number:\n");
    scanf("%f",&fValue1);
    
    printf("Enter Second Number:\n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);   // Method Call 
    
    printf("Addition is:%f\n",fRet);
    
    return 0;
}   //End of main

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Test cases successfully handled by the application
//  Input1 : 10.5    Intput2 : 3.2    Output : 13.7
//  Input1 : -10.5   Intput2 : 3.2    Output : 13.7
//  Input1 : 10.5    Intput2 : -3.2   Output : 13.7
//  Input1 : 10.5    Intput2 : 0.0    Output : 13.7
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

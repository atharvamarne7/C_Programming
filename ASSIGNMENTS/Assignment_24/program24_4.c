// Accept N number from user and display all such numbers which contains 3 digits in it

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<Stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

typedef int * IPTR;     // For integer pointer

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      DisplayDigits
// Description :        It is used to display numbers having 3 digits
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               17/11/2025
//
//////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int Arr[], int iLength)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt] >= 100) && Arr[iCnt] <= 999)
        {
            printf("%d \t",Arr[iCnt]);
        }
   }
  
}   // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    IPTR  iPtr = NULL;

    printf("Enter the numbers of elements : ");
    scanf("%d",&iSize);

    iPtr = (IPTR) malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayDigits(iPtr,iSize);

    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 8525   656  3   970  1000  88     
//  Output : 656    970
//
//
//////////////////////////////////////////////////////////////////////////////
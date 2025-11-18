// Accept N number from user and display summation of all digits of the number 

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<Stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

typedef int * IPTR;

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      SumDigits
// Description :        It is used to display summation of all digits
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               17/11/2025
//
//////////////////////////////////////////////////////////////////////////////

void SumDigits(int Arr[], int iLength)
{
   int iCnt = 0, iSum = 0, iNo = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo/10;
        }

        printf("%d \t",iSum);
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

    SumDigits(iPtr,iSize);

    

    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 8525   656  3   970  1000  88     
//  Output : 20 17  3   16  1   16
//
//
//////////////////////////////////////////////////////////////////////////////
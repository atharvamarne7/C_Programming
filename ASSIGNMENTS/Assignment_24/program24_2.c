// Accept N numbers from user and return Smallest number 

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

typedef int * IPTR;     // For integer pointer

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      Minimum
// Description :        It is used to accept N numbers and find Smallest number
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               17/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}   // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iValue = 0, iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    iPtr = (IPTR) malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Minimum(iPtr,iSize);

    printf("The Smallest number is : %d\n",iRet);
    
    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 15   66  3   70  10  88     
//  Output : 3
//
//
//////////////////////////////////////////////////////////////////////////////

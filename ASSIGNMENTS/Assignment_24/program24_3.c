// Accept N numbers from user and return the difference between largest and smallest number

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
// Function Name :      Difference
// Description :        It is used to find Difference between Smallest and largest number
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               17/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin =Arr[0], iMax = Arr[0];

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return (iMax - iMin);
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

    iRet = Difference(iPtr,iSize);

    printf("The  Difference is : %d\n",iRet);
    
    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 15   66  3   70  10  88     
//  Output : 90 (93 - 3)
//
//
//////////////////////////////////////////////////////////////////////////////
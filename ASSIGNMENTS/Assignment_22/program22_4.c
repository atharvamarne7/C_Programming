// Accept N numbers from user and return frequency of 11 from it

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      Frequency
// Description :        It is used to accept number and return frequency of 11 from it
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               15/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iFrequency)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if(Arr[iCnt]  == 11)        // Static
        {
            iCount++;
        }
    }
    return iCount;
}   // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the numbers of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *) malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory :");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Frequency(iPtr,iLength);

    printf("Frequency of 11 is : %d",iRet);

    free(iPtr);

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 85   66  3   80  93  88           
//  Output : 0
//
//  Input : N = 6, Elements = 85   11  3   80  11  88           
//  Output : 2
//
//////////////////////////////////////////////////////////////////////////////
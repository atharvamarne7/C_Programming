// Accept N numbers from user and accept one another number as No and return frequency of No from it


//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      FrequencyCalculate
// Description :        It is used to accept number and return frequency of that number
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               15/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int FrequencyCalculate(int Arr[], int iFrequency,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}       // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0,iSize = 0;
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

    printf("Enter the number you want to calculate frequency of \n");
    scanf("%d",&iSize);

    iRet = FrequencyCalculate(iPtr,iLength,iSize);

    printf("Frequency of No is : %d",iRet);

    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 85   66  3   80  66  88,   NO = 66           
//  Output : 2

//  Input : N = 6, Elements = 85   66  3   80  11  88,   NO = 12           
//  Output : 0
//
//////////////////////////////////////////////////////////////////////////////
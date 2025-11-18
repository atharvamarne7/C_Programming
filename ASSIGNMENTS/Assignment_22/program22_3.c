// Write a program which accepts N number from user and Check whether that numbers contain that number  or not

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function
#include<stdbool.h>     // For Boolean datatype

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      CheckElement
// Description :        It is used to accept number and return frequency of number from it
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               15/11/2025
//
//////////////////////////////////////////////////////////////////////////////

bool CheckElement(int Arr[], int iSize, int iNo)
{
   int  iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iNo == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}       // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0,iCnt = 0, iValue = 0;
    bool bRet = false;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory ");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = CheckElement(iPtr,iLength,iValue);

    printf("Enter the element you want to search :\n");
    scanf("%d",&iValue);

    if(bRet == true)
    {
        printf("%d is Present in the data \n",iValue);
    }
    else
    {
        printf("%d is Not Present in the data \n ",iValue);
    }

    free(iPtr);


    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 85   66  3   11  93  88           
//  Output : 11 is present
//
//////////////////////////////////////////////////////////////////////////////
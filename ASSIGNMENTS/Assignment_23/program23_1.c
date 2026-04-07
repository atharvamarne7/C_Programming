// Accept N numbers from user and accept one another number as no , check weather no is present or not 

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

#define TRUE 1          // For Boolean datatype
#define FALSE 0

typedef int BOOL;       // For converting boolean into integer

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      CheckElement
// Description :        It is used to accept number and check weather no is present or not
// Input :              Integer           
// Output :             Boolean
// Author :             Atharva Marne
// Date :               16/11/2025
//
//////////////////////////////////////////////////////////////////////////////

BOOL CheckElement(int Arr[], int iSize, int iNo)
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
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}   // End of function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0,iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
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

    if(bRet == TRUE)
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
//  Input : N = 6, Elements = 15   66  3   70  10  88     No : 66     
//  Output : TRUE
//
//  Input : N = 6, Elements = 44   66  32   80  12  88    No : 12          
//  Output : FALSE
//
//////////////////////////////////////////////////////////////////////////////

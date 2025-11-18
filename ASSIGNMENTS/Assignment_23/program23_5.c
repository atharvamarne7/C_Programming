// Accept N from user and return product of all odd elements

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      ProductOdd
// Description :        It is used to accept number and return product of all odd elements
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               16/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int ProductOdd(int Arr[], int iFrequency)
{
    int iCnt = 0, iProduct = 1;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
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

    iRet = ProductOdd(iPtr,iLength);

    printf("Product of Odd Numbers is : %d",iRet);

    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 15   66  3   70  10  88          
//  Output : 45
//
//  Input : N = 6, Elements = 44   66  32   80  12  88          
//  Output : 0
//
//////////////////////////////////////////////////////////////////////////////
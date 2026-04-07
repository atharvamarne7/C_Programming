// write a program which accepts N numbers from user and return difference between frequency of even numbers and odd numbers


//////////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output       
#include<stdlib.h>      // For Malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      FrequencyEvenOdd
// Description :        It is used to calculate difference between frequency of Even and Odd numbers
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               15/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int FrequencyEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return (iEven - iOdd);
    
}       // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iRet = 0, iLength = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory : ");
        return 1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = FrequencyEvenOdd(iPtr,iLength);

    printf("Difference is : %d\n",iRet);

    free(iPtr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 7, Elements = 85   66  3   80  93  88           
//  Output : 1
//
//////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as no , return index of Last occurence of no

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      LastOcc
// Description :        It is used to return idndex of last occuerence of number
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               16/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iFrequency, int iNo)
{
    int iCnt = 0, iOcc = -1;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iOcc = iCnt;
        }
    }
    return iOcc;
}   // End of function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the Number of which index you want :\n");
    scanf("%d",&iValue);

    iRet = LastOcc(iPtr,iLength,iValue);

    if(iRet == -1)
    {
        printf("%d ",iRet);
    }
    else
    {
        printf("Last occurence of the number is %d",iRet);
    }

    free(iPtr);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 15   66  3   66  10  88     No : 66     
//  Output : 3
//
//  Input : N = 6, Elements = 44   66  32   80  12  88    No : 12          
//  Output : -1
//
//////////////////////////////////////////////////////////////////////////////
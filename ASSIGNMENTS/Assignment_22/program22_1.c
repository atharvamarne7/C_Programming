// Accept the number from user and return frequency of EvenNumbers


//////////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      CountEven
// Description :        It is used to calculate frequency of even numbers
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               15/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iFrequency)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
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

    iPtr = (int *) malloc(iLength * sizeof(int));       // Dynamic Memory Allocation

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory :");
        return -1;
    }

    printf("Enter the number of elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = CountEven(iPtr,iLength);

    printf("Frequency of Even Numbers is : %d",iRet);

    free(iPtr);                                         // Free the Memory

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 85   66  3   80  93  88           
//  Output : 3 
//
//////////////////////////////////////////////////////////////////////////////


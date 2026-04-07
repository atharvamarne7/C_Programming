// Accept one number from user and accept range , Display all elements from that range

//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For Input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      Range
// Description :        It is used to accept a range and display elements of that range
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               16/11/2025
//
//////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iFrequency, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
       if((Arr[iCnt] >= iStart) && Arr[iCnt] <= iEnd )
       {
        printf("%d\t",Arr[iCnt]);
       }
    } 
}   // End of Function

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function of the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;

    printf("Enter the numbers of elements : \n");
    scanf("%d",&iLength);

    printf("Enter starting point :");
    scanf("%d",&iValue1);
    
    printf("Enter Ending point :");
    scanf("%d",&iValue2);

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

    Range(iPtr,iLength,iValue1,iValue2);


    free(iPtr);

    return 0;
}   // End of main 

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input1 : N :          6
//           Start :      60
//           End :        90           
//           Elements :   85 66  3   76  93  88   
//   
//  Output : 66  76  88 
//  
//  Input2 : N :          6
//           Start :      30
//           End :        50           
//           Elements :   85 66  3   76  93  88   
//  
//  Output : 
//  
//
//////////////////////////////////////////////////////////////////////////////
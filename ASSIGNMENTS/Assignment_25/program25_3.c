// Accept the number from user and display all such numbers which are Even and divisible by 5 


//////////////////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>       // For input Output
#include<stdlib.h>      // For malloc Function

//////////////////////////////////////////////////////////////////////////////
//
// Function Name :      Display
// Description :        It is used to display all  even numbers which are divisible by 5
// Input :              Integer           
// Output :             Integer
// Author :             Atharva Marne
// Date :               17/11/2025
//
//////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0) && (Arr[iCnt] % 5) == 0)
        {
            printf("%d \t",Arr[iCnt]);
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
    int iLength = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the numbers of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *) malloc(iLength * sizeof(int));       // Dynamic Memory Allocation

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

    printf("The elements are : \n");

    Display(iPtr,iLength);

    
    free(iPtr);                                         // Free the Memory

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//  All the test cases are handled by the apllcation
//
//  Input : N = 6, Elements = 85   66  3   80  93  88           
//  Output : 80 
//
//////////////////////////////////////////////////////////////////////////////


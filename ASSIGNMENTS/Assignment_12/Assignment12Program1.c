// Print all factors of a number in ascending order


/////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Print_Factors
//  Description :       Print factors of number in Ascending order
//  Input :             Integer
//  Output :            Integer
//  Author :            Atharva Marne
//  Date :              16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

void Print_Factors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)                                        //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt== 0)   
        {
            
                printf("%d\t",iCnt);
            
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Print_Factors(iValue);

    return 0;

}


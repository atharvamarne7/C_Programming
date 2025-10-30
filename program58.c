

/*
    Time complexity : For prime - N/2
    Time complexity : For non prime - either 1or 2

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    bFlag = true;
    
    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;              //optimization
        }
    }
    return bFlag;
}




int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number\n",iValue);
    }
    else
    {
        printf("%d is not a Prime Number\n",iValue);
    }

    return 0;
}

/* 
    1 - for Non Prime Best Time Complexity - O(1) for even number
    2 - for Non Prime Worst Time Complexity - O(2) for odd number
    3 - prime Number - O(N/2)

*/
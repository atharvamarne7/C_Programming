//write a program whuch accepts number from user and Display this pattern
// *    *   *   *   *   #   #   #   #   #


#include<stdio.h>

void DisplayPattern(int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
    
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("* \t");
        
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("# \t");
        
    }

}

int main()
{
    int iValue = 0;
    
    printf("Please enter the Frequency :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);
    
    return 0;

}
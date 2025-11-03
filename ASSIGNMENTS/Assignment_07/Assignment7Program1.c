//write a program whuch accepts number from user and print that number of $ and * on the screen


#include<stdio.h>

void DisplayPattern(int iFrequency)
{
   int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("$ \t");
        printf("*\t");
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
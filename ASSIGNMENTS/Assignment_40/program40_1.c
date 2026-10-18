// write a recursive program which display the below pattern
// *   *   *   *   *

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
        Display(iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
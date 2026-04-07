// Write a program to convert Us dollar into indian rupees

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iRupee=70;
    
    iRupee = iNo*70;
    
    return iRupee;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number of US dollar : ");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf(" Value in INR is Rupees: %d\n",iRet);

    return 0;
}
// Write a program which accepts distance in kilometers and convert it into meters (1km = 1000 metres)

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo*1000;
    return iAns;
}
 

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the distance : \n");
    scanf("%d",&iValue);

    
    iRet = KmToMeter(iValue);

    printf("Distance in meters : %d\n", iRet);


    return 0;
}
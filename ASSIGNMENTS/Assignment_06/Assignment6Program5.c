// write a program which accepts total marks and obtained marks from the user and calculate percentage

#include<stdio.h>

float Percentage(int iTotal,int iObtained)
{
    float percentage = 0.0;

    if(iTotal == 0)
    {
        printf("Invalid input\n");
        return 0.0;
    }

    percentage = ((float)iObtained/iTotal)*100;
    return percentage;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter the Total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Your percentage is : %d",fRet);



    return 0;
}
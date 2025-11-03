// Write a program which accepts area in square feet and converts it into square meter (1 Squarefeet = 0.0929 square meter)


#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSquare = 0.0;

    dSquare = iNo * 0.0929;
    return dSquare;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is :%lf",dRet);


    return 0;
}
#include<stdio.h>

void CheckLeapYear(int year)
{
    if(((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not Leap Year",year);
    }
}

int main()
{
    int iYear = 0;
    printf("Enter Year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0;

}
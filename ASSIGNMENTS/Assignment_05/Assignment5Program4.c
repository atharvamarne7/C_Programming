// Check positive , negative or zero

#include<stdio.h>

void CheckNumberType(float iNo)
{
    if(iNo > 0)
    {
        printf("It is a positive number\n");
    }
    else if(iNo < 0)
    {
        printf("It is a negative number\n");
    }
    else
    {
        printf("it is zero\n");
    }
}

float main()
{
    float iNumber = 0;

    printf("Enter the Number : \n");
    scanf("%f",&iNumber);

    CheckNumberType(iNumber);

    return 0;
}
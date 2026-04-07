// Write a program which accepts temperature in farenheits and convert it into celsius (celsius = (farenheit - 32) * (5/9))


#include<stdio.h>

double FhToCh(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);
    return dCelsius;

}

int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temperature in Farenheits : \n");
    scanf("%f",&fValue);

    dRet = FhToCh(fValue);

    printf("Temperature in celsius is : %lf\n",dRet);

    return 0;
}


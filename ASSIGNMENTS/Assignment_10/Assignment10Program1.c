// Write a program which accepts radius of circle from the user and calculate its area .consider value of PI =3.14 (Area =PI*Radius*Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area =0.0;
    float PI = 3.14;
    

    Area = PI * fRadius * fRadius;
    return Area;
}
 

int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f\n", dRet);


    return 0;
}
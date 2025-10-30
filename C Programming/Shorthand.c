#include<stdio.h>

int main()
{
    int i=10;
    int j=10;

    int iAns=0, jAns=0;

    iAns=i++;
    jAns=++j;

    printf("value of i:%d\n",i);              //11
    printf("value of iAns:%d\n",iAns);        //10
  

    printf("value of j:%d\n",j); //11
    printf("value of jAns:%d\n",jAns); //11



    return 0;
}
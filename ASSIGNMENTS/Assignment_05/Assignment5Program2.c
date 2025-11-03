// Find maximum of two numbers


#include<stdio.h>

int FindMax(int iNo1,int iNo2)
{
    if(iNo1 < 0 )                                    //Updator
    {
        iNo1 = -iNo1;
    }
    else
    {
        iNo2 = -iNo2;
    }


    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iResult = 0;

    printf("Enter First number : \n");
    scanf("%d",&iNum1);

    printf("Enter Second number : \n");
    scanf("%d",&iNum2);

    iResult = FindMax(iNum1,iNum2);

    printf("Maximum Number is : %d\n",iResult);
    
    
    return 0;

}
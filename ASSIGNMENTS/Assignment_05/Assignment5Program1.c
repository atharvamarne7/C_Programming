// Check Even Odd

#include<stdio.h>

void CheckEvenOdd(int inum)
{
    if((inum % 2)==0)
    {
        printf("It is a Even number\n",inum);

    }
    else
    {
        printf("It is a odd number\n",inum);
    }
}

int main()
{

    int iNumber = 0;

    printf("Enter the number : ");
    scanf("%d",&iNumber);

    CheckEvenOdd(iNumber);

    return 0;
}
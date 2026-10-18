#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    static char ch = 'a';
    static int iCnt = 1; 

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        Display(iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}
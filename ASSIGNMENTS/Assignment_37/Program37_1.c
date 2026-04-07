#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found...!");
    }
    else
    {
        printf("Character Not Found...!");
    }

    return 0;
}
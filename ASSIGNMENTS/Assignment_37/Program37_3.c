#include<stdio.h>

int FirstOccurence(char *str, char ch)
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
           return iCnt;
        }
        str++;
        iCnt++;
    }
    return -1;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = FirstOccurence(Arr,cValue);

    printf("The Occurence of the character is : %d\n",iRet);
    return 0;
}
#include<stdio.h>

int strCpyX(char *src, char *dest)
{
   
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
    
}

int main()
{
    char Arr[50]={'\0'};
    char Brr[50] ={'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    scanf("%[^'\n']s",Brr);

    iRet = strCpyX(Arr,Brr);

    printf("%s\n",Brr);
    return 0;
}
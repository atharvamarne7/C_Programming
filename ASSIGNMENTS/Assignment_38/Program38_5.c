#include<stdio.h>

int strToggleX(char *src, char *dest)
{
   
   while(*src != '\0')
   {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
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

    iRet = strToggleX(Arr,Brr);

    printf("%s\n",Brr);
    return 0;
}
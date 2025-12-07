#include<stdio.h>

int strCpyRev(char *src, char *dest)
{
   
      while(*src != '\0')
    {
        src++;
    }
    src--;

    while(dest < src)
    {
        *dest = *src;
        src--;
        dest++;
    }
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

    iRet = strCpyRev(Arr,Brr);

    printf("%s\n",Brr);
    return 0;
}
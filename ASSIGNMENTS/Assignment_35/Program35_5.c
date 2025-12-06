#include<stdio.h>

void Reverse(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    // Find string length
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;     // move to last character (not '\0')

    // Reverse logic
    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("%s\n",arr);

    return 0;
}
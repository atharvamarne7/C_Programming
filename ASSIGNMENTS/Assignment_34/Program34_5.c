#include<stdio.h>

void Display(char ch)
{
    printf("ASCII Decimal     : %d\n", ch);
    printf("ASCII Hexadecimal : 0x%X\n", ch);
    printf("ASCII Octal       : %o\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

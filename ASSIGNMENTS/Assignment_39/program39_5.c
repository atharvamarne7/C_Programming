#include<stdio.h>
#include<stdlib.h>

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}
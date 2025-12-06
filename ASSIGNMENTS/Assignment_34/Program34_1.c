#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("---------------------------------------------------------\n");
    printf("  DECIMAL    HEXA     OCTAL     SYMBOL\n");
    printf("---------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        char ch = (i >= 32 && i <= 126) ? i : '.';

        printf("    %3d      0x%02X      %03o        %c\n", i, i, i, ch);
    }

    printf("---------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}

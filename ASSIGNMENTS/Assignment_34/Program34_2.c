// Accept a character from user . if it is small display its corresponding capital 

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))          // Small → Capital
    {
        printf("Output : %c\n",ch - 32);
    }
    else if((ch >= 'A') && (ch <= 'Z'))     // Capital → Small
    {
        printf("Output : %c \n",ch + 32);
    }
    else
    {
        printf("Output : %c\n",ch);
    }
    
}
int main()
{
    char cValue = '\0';
    

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
#include<stdio.h>

int ReverseString(char *str)
{
    char *Start = str;
    char  *End = str;
    char temp = '\0';
    
    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End )
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
        
    }

}

int main()
{
    char Arr[50];
    char cValue = '\0';

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseString(Arr);

    printf("The Modified string is : %s\n",Arr);;
    return 0;
}
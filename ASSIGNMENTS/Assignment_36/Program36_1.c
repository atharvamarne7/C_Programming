 #include<stdio.h>

void strlwr(char *str)
{
   while(*str != '\0')
   {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
   }
    
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s",&Arr);

    strlwr(Arr);

    printf("Converted string is : %s\n",Arr);

    return 0;
}
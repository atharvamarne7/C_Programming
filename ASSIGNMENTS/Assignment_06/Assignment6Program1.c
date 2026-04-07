// Write the program which accepts name from the user and print that name

#include<stdio.h>

int main()
{

    char cName [30];
    printf("Please enter full Name : ");
    scanf("%[^\n]s",cName);

    printf("Your name is %s",cName);

    return 0;
}
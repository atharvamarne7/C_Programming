// Accept character from user and check weather it is character or not

#include<stdio.h>

void DisplayTime(char chDiv)
{
    if((chDiv == 'a') || (chDiv == 'A'))
    {
        printf("Your Exam is at 7 AM \n");
    }
    else if((chDiv == 'b') || (chDiv == 'B'))
    {
      printf("Your Exam is at 8.30 AM \n");  
    }
    else if((chDiv == 'c') || (chDiv == 'C'))
    {
      printf("Your Exam is at 9.20 AM \n");  
    }
    else if((chDiv == 'd') || (chDiv == 'D'))
    {
      printf("Your Exam is at 10.30 AM \n");  
    }
    else
    {
        printf("Invalid Division \n");
    }
}

int main()
{
    char cValue = '\0';
     
    printf("Enter the Division : \n");
    scanf("%c",&cValue);

    DisplayTime(cValue);

    return 0;
}
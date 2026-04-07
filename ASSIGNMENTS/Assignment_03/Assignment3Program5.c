//Accept one character from user and check whether character is vowel (a,e,io,u) or not.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////
#include<stdio.h>               //For Input Output
#include<stdbool.h>             //For Boolean datatype

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   check whether character is vowel (a,e,io,u) or not
//  Input :         character
//  Output :        Character
//  Author :        Atharva Marne   
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////
bool CheckVowel(char CValue)
{
    if(CValue == 'a'||CValue == 'e'||CValue == 'i'||CValue == 'o'||CValue == 'u'||CValue == 'A'||CValue == 'E'||CValue == 'I'||CValue == 'O'||CValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}//End of CheckVowel

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);              //Function call

    if(bRet == true)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : a       Output : It is a vowel
//  Input : k       Output : It is not vowel
//  Input : I       Output : It is a vowel
//  Input : Z       Output : It is not vowel
//
/////////////////////////////////////////////////////////////
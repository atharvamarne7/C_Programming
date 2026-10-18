#include<iostream>

using namespace std;

int StrlenX(char *str)
{
     if (*str == '\0')
    {
      return 0;
    }
    
    return 1 + StrlenX(str + 1);
}

int main()
{
    int iRet = 0;
    char cArr[20];

    cout<<"Enter String : \n";
    cin>>cArr;

    iRet = StrlenX(cArr);

    cout << "Length of string = " << iRet;

    return 0;
}
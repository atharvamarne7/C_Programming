#include<iostream>

using namespace std;

int Fact(int iNo)
{
    if (iNo == 0 || iNo == 1)
    {
       return 1;
    }
    // Recursive step: n * factorial of (n-1)
    return iNo * Fact(iNo - 1);
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    iRet = Fact(iValue);

    cout << "Factorial = " << iRet;

    return 0;
}
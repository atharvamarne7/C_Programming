#include<iostream>

using namespace std;

int Sum(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)          // base condition
    {
        return 0;
    }

    int lastDigit = iNo % 10;
    int remainingSum = Sum(iNo / 10);
    int totalSum = lastDigit + remainingSum;

    return totalSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<iRet;

    return 0;
}
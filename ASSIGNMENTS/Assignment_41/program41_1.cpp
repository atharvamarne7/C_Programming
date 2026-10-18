#include<iostream>

using namespace std;

void Display(int iNo)
{
    static int iCnt = 0;

    if(iCnt == 0)   
    {
        iCnt = iNo;
    }

    if(iCnt < 1)   // base condition
    {
        return;
    }

    cout<<iCnt<<"\t*\t";
    iCnt--;

    Display(iCnt);
}


int main()
{
    int iValue = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}
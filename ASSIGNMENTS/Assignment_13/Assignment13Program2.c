// print all even numbers till N



#include<stdio.h>

void print_EvenNumbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
         printf("%d\n",iCnt);
        }
    }

}

int main()
{

    int iLimit = 0;

    printf("Enter number : \n");
    scanf("%d",&iLimit);

    print_EvenNumbers(iLimit);


    return 0;
}

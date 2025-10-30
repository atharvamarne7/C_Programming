#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0;
  bool bFlag =true;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
  {
    if((iNo % iCnt)==0)
    {
      bFlag=false;
      break;                //Optimization due to break

    }
  }
  return bFlag;
}




int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter the number : \n");
  scanf("%d",&iValue);
  
  bRet = CheckPrime(iValue);

  if(bRet==true)
  {
    printf("%d is prime number\n",iValue);
  }
  else
  {
    printf("%d is not prime number\n",iValue);
  }

  return 0;
}


/* 
    1 - for Non Prime Best Time Complexity - O(1) for even number
    2 - for Non Prime Worst Time Complexity - O(2) for odd number
    3 - prime Number - O(N/2)

*/

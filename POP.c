#include<stdio.h>

int addition(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;
    return iAns;
}
int subtraction(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 - iNo2;
    return iAns;
}
int main()
{
  int iRet = 0;

  iRet = addition(11,10);
  printf("Addition is :%d\n",iRet);

  iRet = subtraction(11,10);
  printf("Subtraction is :%d\n",iRet);

    return 0;
}

// Program to Display 5 times "HELLO" on Screen

#include<stdio.h>
void Display(int iNo)
{
  int iCnt =0;

  for(iCnt = 0 ; iCnt<iNo;iCnt++)
  {
    printf("HELLO\n");
  }
}
int main()
{
  int iValue = 5;

  Display(iValue);

  return 0;

}


































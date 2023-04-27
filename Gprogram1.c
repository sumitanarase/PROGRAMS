#include<stdio.h>
// Write a program to perform addition of two number

////////////////////////////////////////////////////////
//
//Function Name = Addition
//Description = used to perform addition of 2 numbers
//input = integer,integer
//output = integer
//author = Sumit Anil Anarase
//
//////////////////////////////////////////////////////
int Addition(int iNo1 , int iNo2)
{
  int iSum=0;

  iSum = iNo1+iNo2;

  return iSum;
}

int main()
{
  int iValue1 =0;
  int iValue2 =0;
  int iRet = 0;
  printf("Enter the first number \n");
  scanf("%d",&iValue1);

  printf("Enter the second number\n");
  scanf("%d",&iValue2);


  iRet = Addition(iValue1,iValue2);
  printf("Addition of two number is : %d\n",iRet);



  return 0;

}
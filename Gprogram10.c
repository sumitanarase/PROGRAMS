//Display Non Factors elements
#include<stdio.h>
void  DisplayNonFactor(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iNo % iCnt !=0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
  int iValue =0;

  printf("Enter the Number :");
  scanf("%d",&iValue);

  DisplayNonFactor(iValue);
    return 0;
}
// write a program to calculate the power of that number using for loop or while loop
// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

#include<stdio.h>

int Power(int iNo1,int iNo2)
{
    int iCnt =1;
    int iMult =1;

    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
    if(iNo2<0)
    {
        iNo2 = -iNo2;
    }

    /*for(iCnt = 1;iCnt<=iNo2;iCnt++)
    {
        iMult = iMult * iNo1;
    }*/
    
    
    while(iCnt <= iNo2)
    {
       
        iMult = iMult * iNo1;
         iCnt++;

    }
    return iMult;
}
int main()
{
    int iValue1 =0;
    int iValue2 =0;
    int iRet =0;

    printf("Enter the base :\n");
    scanf("%d",&iValue1);

    printf("Enter the power :\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);
    printf("Result is :%d",iRet);

    return 0;
}
#include<stdio.h>
int r(int x)
{

        int iDigit = 0;
       long int iRev =0;

      

        while(x != 0)
        {
            iDigit = x % 10;

            iRev = iRev * 10 +  iDigit;

            x = x /10;
        }
        return iRev;
}
int main()
{
    int iValue =0;

    int iRet =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet = r(iValue);

    printf("Reverse Number is : %d",iRet);


    return 0;
}
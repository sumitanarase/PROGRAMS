#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int iNo)
{

    int iDigit =0;

    int iTemp =0;
    int iRev =0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = iRev *10 + iDigit;

        iNo = iNo /10;
    }

    if(iTemp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue =0;
    int iCnt =0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);


    bRet= Check(iValue);

    if(bRet == true)
    {
        printf("Yes");
    }
    else
    {

        printf("No");
    }





    return 0;
}
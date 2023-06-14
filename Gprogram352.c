#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{

    int iTemp = 0;

    int iDigit =0;
    int iRev =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = iRev *10+ iDigit;

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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet ==  true)
    {
        printf("Number is Pallindrome \n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }



    return 0;
}
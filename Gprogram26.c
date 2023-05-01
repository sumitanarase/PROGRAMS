// accept number from user and check number is pallindrom number or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit =0 ;
    int iRev =0;
    int iTemp =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev =  iRev *10 + iDigit;
        iNo = iNo / 10 ;

    }

    if(iRev == iTemp)
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
    bool bRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is pallindrom",bRet);
    }
    else
    {
       printf("Number is not Pallindrome ",bRet);
    }

    return 0 ;
}
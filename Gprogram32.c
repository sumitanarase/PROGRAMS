//check number is armstrong or not 
#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1 ,int iNo2)
{
    int iMult = 1;
    

    for(int iCnt =1; iCnt <= iNo2 ; iCnt++)
    {
        iMult =  iMult *iNo1;
    }
    return iMult;

}
bool CheckArmstrong(int iNo)
{

    int iDigit = 0;
    int iTemp = 0;
    int iDigCnt =0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo  = -iNo;
    }
    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        iDigCnt++;
        iNo = iNo /10;

    }
    iNo  = iTemp;


    while(iNo != 0)
    {
        iDigit = iNo % 10 ; 
        iSum =  iSum + Power(iDigit,iDigCnt);
        iNo = iNo /10 ;

    }
    if(iSum ==  iTemp)
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

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet ==  true)
    {
        printf("%d Number is armstrong",iValue);

    }
    else
    {
        printf("%d Number is not armstrong ",iValue);
    }
    
    return 0;
}
//check Arm strong another one for better approach

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iDigit ,iDigcnt,iTemp=0;
    int iMult = 1;
    int iSum = 0;
    
   
     iNo = iTemp;
    while(iNo !=0)
    {
        iDigcnt++;
        iNo = iNo /10;

    }
   
 iTemp = iNo;
    while(iNo != 0)
    {
        iDigit =  iNo % 10 ;
        
        for(int iCnt = 1; iCnt<=iDigcnt;iCnt++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;
        iNo = iNo /10;
    }
    if(iSum = iTemp)
    {
        return true ;
    }
    else
    {
        return false;
    }


}
int main()
{
    int iValue =0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d Number is Armstrong ",iValue);

    }
    else
    {
        printf("%d Number is Not Armstrong ",iValue);
    }

    return 0;
}
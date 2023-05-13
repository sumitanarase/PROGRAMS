#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1 ,int iNo2)
{
    int iMult= 1;

    iMult = iMult*iNo2;

    return iMult;
}

bool Armstrong(int iNo)
{
    int iDigit =0;
    int DigCnt =0;
    int i =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        DigCnt++;
        iNo = iNo /10;
    }
    i = Power(iDigit,DigCnt);

}

int main()
{
    int iValue =0;
    bool bret = false;

    printf("Enter the NUmber ");
    scanf("%d",&iValue);

    bret = Armstrong(iValue);

    if(bret == true)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }



    return 0;
}
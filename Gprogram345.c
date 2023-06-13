#include<stdio.h>
#include<stdbool.h>

bool Check(int iValue)
{
    int iCnt =0;

    for(iCnt = 2 ;iCnt<=(iValue/2);iCnt++)
    {
        if((iValue %iCnt)==0)
        {
            break;
        }
    }
    if(iCnt ==(iValue/2)+1)
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

    bool bRet = true;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet ==  true)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }



    return 0;
}
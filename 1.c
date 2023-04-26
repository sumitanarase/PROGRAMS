#include<stdio.h>
#include<stdbool.h>

bool Chek(int iN)
{
    int i = 0;

    for(i =2 ; i<=iN/2 ; i++)
    {
        if(iN % i == 0)
        {
            break;
        }
    }
    if(i == (iN/2)+1)
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
    bool bRet= false;

    printf("Enter the Number ");
    scanf("%d",&iValue);

    bRet = Chek(iValue);

    if(bRet == true)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }


    return 0;
}
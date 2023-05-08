#include<stdio.h>
#include<stdbool.h>

bool Power(int iNo)
{
    if(iNo ==0)
    {
        return 0;
    }
    while(iNo != 1)
    {
        if(iNo %2 !=0)
        {
            return 0;
            iNo = iNo /2;
        }
    }
    return 1;
    
}
int main()
{
   // int iValue =0;
    bool bRet = false;

    //printf("Enter the Number :\n");
    //scanf("%d",&iValue);

    //display(iValue);

   // bRet = Power(iValue);

   Power(31)?printf("yes"):printf("no");
   Power(64)?printf("yes"):printf("no");

    return 0;

}
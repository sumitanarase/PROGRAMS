#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
    int iCnt = 0;

    if((iNo % 2) == 0)
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
    bool bret = false;


    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bret = Display(iValue);

   if(bret == true)
   {

    printf("Number is divided by 2");


   }
   else
   {
    printf("No\n");
   }

    return 0;
}
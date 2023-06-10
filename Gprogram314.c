#include<stdio.h>

int Addition(int iNo1 , int iNo2)
{
    int ans =0;

    ans= iNo1 +iNo2 ;

    return ans;
}

int main()
{
    int iValue = 11 ,iValue2 = 21;
    int i =0;

    int *fptr = NULL;

    int (*fptr)(int ,int);
    fptr = Addition;

    i = Addition(iValue,iValue2);

   // printf(i)


    





    return 0;
}
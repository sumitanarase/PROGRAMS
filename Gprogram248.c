#include<stdio.h>

int Additon(int iValue1 ,int iValue2)
{
    int ans = 0;
    ans = iValue1 + iValue2;

    return ans ;

}
int main()
{
    int a=10 ,b =20;
    int iRet =0;


    int (*fptr) (int ,int);

    fptr = Additon;

    iRet = Additon(10 ,20);

    printf("Addition is :%d",iRet);

    


    return 0;
}
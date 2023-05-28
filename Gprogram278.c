#include<stdio.h>

int Division(int iNo1 ,int iNo2)
{
    int ans =0;

    ans = iNo1 / iNo2 ;
    return ans;



}
int main()
{
    int iValue1 =0;
    int iValue2 = 0;
    int iret =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue1);

    printf("Enter the Number\n");
    scanf("%d",&iValue2);

    iret = Division(iValue1 ,iValue2);

    printf("Division is : %d",iret);



    return 0;
}
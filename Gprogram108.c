// Input :  Row 4   Columns    4
/*

    a   b   c   d
    a   b   c   d
    a   b   c   d
    a   b   c   d

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i =0,j=0;
    char ch ='\0';

    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='a';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 =0 ;
    int iValue2=0;

    printf("Enter the Number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the Number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    


    return 0;
}
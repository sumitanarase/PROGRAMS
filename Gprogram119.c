/*
2. Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output :
 A B C D
a b c d
A B C D
a b c d
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch ='\0';

    for(i=1;i<=iRow/2;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)
        {
            
            printf("%c\t",ch);
            

        }
        printf("\n");
        for(j=1,ch='a';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
            

        }
        printf("\n");
    }
}
int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

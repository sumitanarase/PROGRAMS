#include<stdio.h>

void Display(int ival)
{
int icnt= 0;
    while (icnt < ival)
    {
        printf("heloo\n");

        
        icnt++;


    }
    
}

int main()
{
    int ino = 0;

    printf("Enetr the Number\n");
    scanf("%d",&ino);

    Display(ino);


   


    return 0;
}
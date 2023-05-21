#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 10;
    int *p = NULL;


   // p = (int*)malloc(sizeof(int)*no);

    p = (int*)calloc(1 , 4);
    

    if(p == NULL)
    {
         printf("no\n");
    }
    else
    {
       
        printf("memeory allocated succeful \n");
    }



    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{

    
    int size=0;
    int*ptr=NULL;

    printf("enter number of element :");

    scanf("%d",&size);
    ptr = (int*)malloc(size*sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory\n");

    }
    else
    {

        printf("memory successfully allocated\n");
    }

    return 0;
}
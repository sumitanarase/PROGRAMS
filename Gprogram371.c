#include<stdio.h>
#include<stdlib.h>
// argc = argument cha count 
int main(int argc , char * argv[])
{
   int ans =0;
   printf("Name of executable is : %s\n",argv[0]);


    ans = atoi(argv[1])+(atoi(argv[2]));

    printf("Addition is : %d\n",ans);
    return 0;
}
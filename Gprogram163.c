#include <stdio.h>
#include<stdlib.h>
 
void findMissing(int arr[], int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++) {
        temp[i] = 0;
    }
 
    for (int i = 0; i < N; i++) {
        temp[arr[i] - 1] = 1;
    }
 
    int ans;
    for (int i = 0; i <= N; i++) {
        if (temp[i] == 0)
            ans = i + 1;
    }
    printf("%d", ans);
}
int main()
{
    int iSize =0;
    int iValue =0;
    int *ptr = NULL;
    
    printf("Enter the size of array :\n");
    scanf("%d",&iSize);

   

    ptr = (int *)malloc(iSize * sizeof(int));

    for(int iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enetr the number",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    findMissing(ptr,iSize);

    free(ptr);

    return 0;
}
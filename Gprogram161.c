#include <stdio.h>
 
/* Returns true if the there is a subarray
of arr[] with a sum equal to 'sum'
   otherwise returns false.  Also, prints
the result */
void subArraySum(int arr[], int n, int sum)
{
    // Pick a starting point
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
 
        if (currentSum == sum) {
            printf("Sum found at indexe %d ", i);
            return;
        }
        else {
            // Try all subarrays starting with 'i'
            for (int j = i+1; j < n; j++) {
                currentSum = currentSum  + arr[j];
 
                if (currentSum == sum) {
                    printf("Sum found between indexes %d " "and %d",i, j);
                    return;
                    
                }
            }
        }
    }
    printf("No subarray found");
    return;
}
 
// Driver program to test above function
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n =  10 ;//sizeof(arr) / sizeof(arr[0]);
    int sum = 15;
    subArraySum(arr, n, sum);
    return 0;
}
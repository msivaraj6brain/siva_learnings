/*
    Maximum difference between two elements such that larger element appears after the smaller number
    Given an array arr[] of integers, find out the difference between any two elements such that larger element appears after the smaller number in arr[].

    Examples: If array is [2, 3, 10, 6, 4, 8, 1] then returned value should be 8 (Diff between 10 and 2). If array is [ 7, 9, 5, 6, 3, 2 ] then returned value should be 2 (Diff between 7 and 9)
*/

#include<stdio.h>

// 2, 3, 10, 6, 4, 8, 1
// 7, 9, 5, 6, 3, 2 

int maxDiff (int arr[], int arr_size)
{
    int maxd = 0;
    
    for (int i = 1; i < arr_size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (arr[i] - arr[j] > maxd) {
                    maxd = arr[i] - arr[j];
                }
            }
        }
    }
    return maxd;
}

int main ()
{
    int len, i;
    printf( "Enter the length of the array\n"); 
    scanf("%d",&len);
    int arr[len];
    printf( "Enter the elements of the array\n");
    for( i=0; i< len; i++) 
    { 
        scanf("%d",&arr[i]);
    }
    printf ("Maximum difference is %d" , maxDiff (arr, len));
    return 0;
}
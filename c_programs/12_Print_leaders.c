// https://prepinsta.com/cocubes-coding-questions-programming-paper/

/*
    Printing all the Leaders in an Array
    Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side.

    And the rightmost element is always a leader. For example int the array {16, 19, 4, 3, 8, 3}, leaders are 19, 8 and 3?
*/

#include <stdio.h>

// 16, 19, 4, 3, 8, 3

void findLeaders(int arr[], int size)
{
    for (int i = 0, j = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }
        if (j == size) {
            printf("%d\n", arr[i]);
        }
    }
}
 
int main()
{  
    int len, i;
    printf("Enter the length of the array : "); 
    scanf("%d",&len);
    int arr[len];
    printf("Enter the elements of the array : ");
    for( i=0; i< len; i++) 
    { 
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    findLeaders(arr, n);
    return 0;
}
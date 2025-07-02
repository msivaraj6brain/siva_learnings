/*
    Find the count of numbers in the array which has K digits in it.

Note: size of array and the value of K is always greater than zero.

Example:

Input:
arr=[10,22,3,4,1,6,7,8,5,33,4,99,100]
k=2

Output:
4

Explanation:
2 digit numbers are 10,22,33,99
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 22, 3, 4, 1, 6, 7, 8, 5, 33, 4, 99, 100};
    int k = 2;
    int count = 0;
    int final = 0;
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        int temp = arr[i];
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
        if (count == 2) {
            final++;
        }
        count = 0;
    }
    
    printf("%d\n", final);
    
    return 0;
}
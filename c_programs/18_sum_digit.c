/*
    find the sum of the digits in a number until its sum is equal to single digit. Consider the below example for better understand

#testcase1:

Input:
123

Output:
6

Explanation:
1+2+3=6

#testcase2:

Input:
8448440710

Output:
4

Explanation:
=8+4+4+8+4+4+0+7+1+0
=40 =4+0
4

*/

#include <stdio.h>

// 123

int main() {
    
    int num = 12345;
    int sum = 0;
    
    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
        printf("%d - %d\n", num, sum);
        if (num == 0 && sum > 9) {
            num = sum;
            sum = 0;
        }
    }
    
    printf("\n%d\n", sum);
    
    return 0;
}
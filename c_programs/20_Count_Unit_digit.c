/*
    Return the count of numbers whose unit digit is end with the integer ‘k’ which is one of the input given to the function.

You were given with three inputs starting range , ending  range and the integer k.

Example:

Input: 
start=10
end=54
k=2

Output:
5

Explanation:
numbers with unit digit as 2 in the given range is 12,22,32,42,52
*/

#include <stdio.h>

// start = 10
// end = 54
// k = 2

int main() {
    int start = 10;
    int end = 54;
    int k = 2;
    
    for (int i = start; i < end; i++) {
        if (i % 10 == k) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
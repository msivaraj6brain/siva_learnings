/*
    Find the number closest to n and divisible by m
    Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number, then output the one having maximum absolute value. If n is completely divisible by m, then output n only. Time complexity of O(1) is required.

    Constraints: m != 0

    We find value of n/m. Let this value be q. Then we find closest of two possibilities. One is q * m other is (m * (q + 1)) or (m * (q – 1)) depending on whether one of the given two numbers is negative or not.
*/


#include <stdio.h>
#include <stdlib.h>

// 13, 4
// -15, 6

int closestNumber (int n, int m)
{
    int q, n1, n2;
    
    q = n / m;
    n1 = m * q;
    
    if (n * m > 0) {
        n2 = m * (q + 1);
    } else {
        n2 = m * (q - 1);
    }
    
    if (abs(n - n1) < abs(n - n2)) {
        return n1;
    } else {
        return n2;
    }
}

int main ()
{
    int n, m;
    printf("Enter two numbers : ");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",closestNumber(n,m));
    return 0;
}
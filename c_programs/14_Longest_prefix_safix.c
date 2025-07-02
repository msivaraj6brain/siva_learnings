/*
    Longest Prefix Suffix
    Given a string of character, find the length of longest proper prefix which is also a proper suffix.
    Example:
    S = abab
    lps is 2 because, ab.. is prefix and ..ab is also a suffix.
*/

#include <stdio.h>

// abab
// aaaa

int longest(char str[], int n)
{
    int f = 0, l = n / 2;
    while(str[l] != '\0') {
        if (str[f] == str[l]) {
            f++;
            l++;
        } else {
            if (f == 0) {
                l++;
            } else {
                f--;
            }
        }
    }
    return f;
}

int main()
{
    char str[] = {"abad"};
    int n = sizeof(str)/sizeof(str[0]);
    int length = longest(str, n);
    printf("%d", length);
    return 0;
}
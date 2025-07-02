/*
    Given a string consisting of only 0, 1, A, B, C where
    A = AND
    B = OR
    C = XOR
    Calculate the value of the string assuming no order of precedence and evaluation is done from left to right.

    Constraints – The length of string will be odd. It will always be a valid string.
    Example, 1AA0 will not be given as an input.

    Examples:

    Input: 1A0B1
    Output : 1
    1 AND 0 OR 1 = 1

    Input : 1C1B1B0A0
    Output : 0
*/

#include <stdio.h>
#include <string.h>

// 1A0B1
// 1C1B1B0A0

int evaluateBoolExpr(char* s)
{
    int slen = strlen(s);
    
    for (int i = 0; i < slen; i = i + 2) {
        if (i + 1 < slen && i + 2 < slen) {
            // AND
            if (s[i + 1] == 'A') {
                if (s[i] == '0' || s[i + 2] == '0') {
                    s[i + 2] = '0';
                } else {
                    s[i + 2] = '1';
                }
            // OR
            } else if (s[i + 1] == 'B') {
                if (s[i] == '1' || s[i + 2] == '1') {
                    s[i + 2] = '1';
                } else {
                    s[i + 2] = '0';
                }
            // XOR
            } else if (s[i+1] == 'C') {
                if (s[i] == s[i + 2]) {
                    s[i + 2] = '0';
                } else {
                    s[i + 2] = '1';
                }
            }
        }
    }
    
    return s[slen - 1] - '0';
}

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int result = evaluateBoolExpr(str);
    printf("%d",result);
}

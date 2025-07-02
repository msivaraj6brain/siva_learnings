/*
    In English alphabet a,e,i,o,u are called as vowels. Write a function to return the most frequent vowel used in the given input string.

Note: All characters are lower case English alphabets

Example:

Input:
abeabutiedcia

Output:
a

Explanation:
a occured 3 times
*/

#include <stdio.h>
#include <string.h>

// abeabutiedcia

int main() {
    
    int vowelCount[] = {0, 0, 0, 0, 0};
    char str[] = "abeabutiedcia";
    int slen = strlen(str);
    int largest;
    
    for (int i = 0; i < slen; i++) {
        if (str[i] == 'a') { vowelCount[0]++; }
        if (str[i] == 'e') { vowelCount[1]++; }
        if (str[i] == 'i') { vowelCount[2]++; }
        if (str[i] == 'o') { vowelCount[3]++; }
        if (str[i] == 'u') { vowelCount[4]++; }
    }
    
    largest = 0;
    for (int i = 1; i < 5; i++) {
        if (vowelCount[i] > vowelCount[largest]) {
            largest = i;
        }
    }
    
    printf("%d\n", largest);
    
    return 0;
}
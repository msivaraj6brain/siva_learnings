/*
    Make a function which accepts a string as an argument that may contain repetitive characters. 
    Implement the function to modify and return the input string, such that each character once, 
    along with the count of consecutive occurrence. Do not append count if the character occurs only once.

    Note – 

    The string will only contain lowercase English Alphabets
    If you have to manipulate the input string in place you cant use another string
    Assumption – 
    No character will occur consecutively more than 9 times.

    Example – 

    Input 
    aaaabbbccccccccdaa

    Output
    a4b3c8da2
*/

#include <stdio.h>
#include <string.h>

char* StrOccurrence(char* str) {
    int slen = strlen(str);
    int count = 1, dup = 0;
    
    for (int i = 0; i < slen; i++) {
        for (int j = i + 1; j < slen; j++) {
            if (str[i] != str[j]) {
                break;
            } else {
                count++;
            }
        }
        if (count > 1) {
            str[i + 1] = count + 48;
            i = count + 1;
        }
        
        // still pending

        count = 1;
    }
    return str;
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("%s\n", StrOccurrence(str));
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    
    char S[20] = "aaaa";
    char T[20] = "aaaa";
    int start = 0;
    int end = strlen(T) - 1;
    
    while (start < end) {
        char temp = T[start];
        T[start] = T[end];
        T[end] = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == T[i]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    
    
    return 0;
}
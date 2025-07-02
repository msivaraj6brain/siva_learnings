#include <stdio.h>
#include <string.h>

int main() {
    char alpha[] = "abcdefghstuvwxyzijklmnopqr";
    //char str[] = "tocmat";
    char str[] = "otcmta";
    int k = 2;

    char stralpha[2][strlen(str) + 1];
    
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        for (int j = 0; alpha[j] != '\0'; j++) {
            if (str[i] == alpha[j]) {
                stralpha[0][i] = j;
                stralpha[1][i] = str[i];
                break;
            }
        }
    }
    stralpha[0][i] = 0;
    stralpha[1][i] = '\0';
    
    for (int i = 0; i < 6; i++) {
        printf("%d - %c\n", stralpha[0][i], stralpha[1][i]);
    }
    
    int flag = 0;
    for (int i = 0; i < strlen(str); i = i + k) {
        if (flag == 0) {
            // ascending order
            for (int a = i; a < k + i; a++) {
                for (int b = a; b < k + i; b++) {
                    if (stralpha[0][a] > stralpha[0][b]) {
                        char temp1 = stralpha[0][a];
                        char temp2 = stralpha[1][a];
                        stralpha[0][a] = stralpha[0][b];
                        stralpha[1][a] = stralpha[1][b];
                        stralpha[0][b] = temp1;
                        stralpha[1][b] = temp2;
                    }
                }
            }
            flag = 1;
        } else if (flag == 1) {
            // decending order
            for (int a = i; a < k + i; a++) {
                for (int b = a; b < k + i; b++) {
                    if (stralpha[0][a] < stralpha[0][b]) {
                        char temp1 = stralpha[0][a];
                        char temp2 = stralpha[1][a];
                        stralpha[0][a] = stralpha[0][b];
                        stralpha[1][a] = stralpha[1][b];
                        stralpha[0][b] = temp1;
                        stralpha[1][b] = temp2;
                    }
                }
            }
            flag = 0;
        }
    }
    
    printf("%s\n", stralpha[1]);
    
    return 0;
}
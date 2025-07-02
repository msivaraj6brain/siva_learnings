#include <stdio.h>
#include <string.h>

int main() {
    int numstr = 4;
    char str[numstr][20];
    int count = 0;
    
    for (int i = 0; i < numstr; i++) {
        fgets(str[i], sizeof(char)*20, stdin);
    }
    
    int flag = 0;
    for (int i = 0; i < numstr; i++) {
        for (int j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a') {
                continue;
            } else if (str[i][j] == 'b' || str[i][j] > 'b') {
                flag = 1;
            }
            if (flag == 1) {
                for (; j < strlen(str[i]); j++) {
                    if (str[i][j] == 'b') {
                        continue;
                    } else if (str[i][j] == 'a' || str[i][j] > 'b') {
                        flag = 2;
                    }
                }
                if (flag == 2) {
                    break;
                } else {
                    count++;
                }
            }
        }
    }
    
    printf("%d\n", count);

    return 0;
}
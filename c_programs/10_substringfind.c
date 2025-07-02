#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    int str1len;
    printf("Enter the String: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';
    str1len = strlen(str1);
    
    int str2len;
    char str2[str1len];
    printf("Enter the Sub String: ");
    fgets(str2, str1len, stdin);
    str2[strlen(str2) - 1] = '\0';
    str2len = strlen(str2);
    
    int flag = 0;
    
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        if (str1[i] == str2[0]) {
            int itemp = i;
            while (j < str2len) {
                if (str1[i] != str2[j]) {
                    itemp = i;
                    j = 0;
                    break;
                }
                i++;
                j++;
            }
            if (j == str2len) {
                printf("Sub String found\n");
                flag = 1;
                break;
            }
        }
        i++;
    }
    
    if (str1[i] == '\0' && flag == 0) {
        printf("Sub String not found\n");
    }
    
    return 0;
}

// Method 2

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    
    printf("Enter input str1: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';
    
    char str2[strlen(str1) - 1];
    printf("Enter input str1: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';
    
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == str2[0]) {
            int itemp = i;
            for (int j = 0; str2[j] != '\0'; j++, i++) {
                if (str1[i] != str2[j]) {
                    i = itemp;
                    break;
                }
                if (str2[strlen(str2) + 1] == '\0') {
                    printf("Sub string found\n");
                    return 0;
                }
            }
        }
    }
    printf("Sub not string found\n");
    
    return 0;
}

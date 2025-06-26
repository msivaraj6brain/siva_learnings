#include <stdio.h>

int main() {
    char str[20];
    int length = 0;
    int bool = 1;

    printf("Enter string: ");
    fgets(str, 20, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    str[length - 1] = '\0';

    for (int first = 0, last = length - 2; first < last; first++, last--) {
        if (str[first] != str[last]) {
            bool = 0;
            break;
        }
    }

    if (bool == 0)
        printf("String is not palindrome\n");
    else
        printf("String is palindrome\n");

    return 0;
}
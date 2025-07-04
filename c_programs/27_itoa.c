#include <stdio.h>

int main() {

    int integer;
    int tempint;
    int digitsize = 0;
    char str[20];

    printf("Enter the number: ");
    scanf("%d", &integer);

    tempint = integer;

    while (tempint != 0) {
        tempint = tempint / 10;
        digitsize++;
    }

    str[digitsize] = '\0';

    for (int i = digitsize - 1; i >= 0; i--) {
        str[i] = (integer % 10) + 48;
        integer = integer / 10;
    }

    printf("String: %s\n", str);

    return 0;
}
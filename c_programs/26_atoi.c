#include <stdio.h>

int main() {

    char str[20];
    int integer = 0;
    int strlen = 0;

    printf("Enter the numerical string: ");
    fgets(str, 20, stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        strlen++;
    }
    str[strlen - 1] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            integer = -1;
            break;
        }
        integer = (integer * 10) + (str[i] - 48);
    }

    // if this print return -1, means given string is not in numarical.
    printf("Integer: %d\n", integer);

    return 0;
}
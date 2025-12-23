#include <stdio.h>

int main() {

    int num;
    int rev = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = (num % 10) + (rev * 10);
        num = num / 10;
    }

    printf("Reverse Number: %d\n", rev);

    return 0;
}

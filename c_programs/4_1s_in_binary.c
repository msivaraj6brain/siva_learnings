#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1 == 1) 
            count++;

        printf("%d", (num >> i) & 1);
    }

    printf("\nNumber of 1's: %d\n", count);

    return 0;
}
#include <stdio.h>

int main() {

    printf("Decimal | Character\n");
    for (int i = 0; i <= 127; i++) {
        if (i <= 32 || i == 127) {
            printf("%4d    | Non Printable\n", i);
        }
        if (i >= 33 && i <= 126)
            printf("%4d    | %c\n", i, i);
    }

    return 0;
}
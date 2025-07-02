#include <stdio.h>

int main() {
    
    int a = 10;
    int b = 20;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("%d\n", a);
    printf("%d\n", b);
    
    return 0;
}



// Swap nibble

int main() {
    int num = 12;
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
    
    num = (num & 0x0F) << 4 | (num & 0xF0) >> 4;
    
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
    
    return 0;
}
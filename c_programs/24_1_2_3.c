#include <stdio.h>

int minOper(int a, int b, int n) {
    int oper = 0;
    while (a <= n && b <= n) {
        if (a < b) {
            a = a + b;
        } else {
            b = a + b;
        }
        oper++;
    }
    return oper;
}

int main() {
    int A = 1, B = 2, N = 10;
    int result = minOper(A, B, N);
    printf("%d\n", result);
    
    return 0;
}
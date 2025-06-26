// Method 1

#include <stdio.h>

int main() {

    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    printf("Fibonacci Series: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    return 0;
}



// Method 2 - recursion

#include <stdio.h>

int fibb(int n) {
    static int num1 = 0;
    static int num2 = 1;
    static int sum = 0;

    if (n == 0)
        return 1;

    printf("%d ", num1);
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
    
    return fibb(n - 1);
}

int main() {

    int num = 20;
    
    printf("Fibonacci Series: ");
    fibb(num);
    printf("\n");

    return 0;
}
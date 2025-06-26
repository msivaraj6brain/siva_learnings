// Method 1

#include <stdio.h>

int main() {
    
    int num = 5;
    int fact = 1;

    for (int i = num; i > 0; i--) {
        fact = fact * i;
    }
    
    printf("Factorial: %d\n", fact);

    return 0;
}



// Method 2: - Recursion

#include <stdio.h>

int fact(int num) {
    
    if (num == 0)
        return 1;
    
    return num * fact(num - 1);
}

int main() {

    int num = 5;
    
    printf("Factorial: %d\n", fact(num));

    return 0;
}
#include <stdio.h>

#define SIZEOF(type) (char*)(&type + 1) - (char*)(&type)

int main() {

    int x;

    printf("sizeof(x): %ld\n", SIZEOF(x));

    return 0;
}
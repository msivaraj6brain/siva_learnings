#include <stdio.h>

int main() {

    printf("Size of signed char (int8) = %d\n", sizeof(signed char));
    printf("Size of unsigned char (uint8) = %d\n", sizeof(unsigned char));
    printf("Size of signed short int (int16) = %d\n", sizeof(signed short int));
    printf("Size of unsigned short int (uint16) = %d\n", sizeof(unsigned short int));
    printf("Size of signed int (int32) = %d\n", sizeof(signed int));
    printf("Size of unsigned int (uint32) = %d\n", sizeof(unsigned int));
    printf("Size of signed long int (int32/64) = %d\n", sizeof(signed long int));
    printf("Size of unsigned long int (int32/64) = %d\n", sizeof(unsigned long int));
    printf("Size of signed long long int (int64) = %d\n", sizeof(signed long long int));
    printf("Size of unsigned long long int (uint64) = %d\n", sizeof(unsigned long long int));
    printf("Size of float = %d\n", sizeof(float));
    printf("Size of double = %d\n", sizeof(double));
    printf("Size of long double = %d\n", sizeof(long double));

    return 0;
}
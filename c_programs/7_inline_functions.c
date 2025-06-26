/*  Inline Function are those function whose definitions are
    small and be substituted at the place where its function
    call is happened. Function substitution is totally
    compiler choice.
*/

#include <stdio.h>

static inline int foo() {
    return 2;
}

int main() {

    int ret;
    ret = foo();

    printf("Output is: %d\n", ret);
    
    return 0;
}
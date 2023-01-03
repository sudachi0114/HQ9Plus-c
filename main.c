#include <stdio.h>

#include "hello.c"
#include "99.c"
#include "counter.c"

int main(void) {
    hello();

    print_99_bottle_of_beer();

    int n = 0;
    increment(n);

    return 0;
}
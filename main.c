#include <stdio.h>

#include "hello.c"
#include "source.c"
#include "99.c"
#include "counter.c"

int main(int argc, char *argv[]) {
    char s[16];

    if (argv[1] != NULL) {
        // ファイルで渡された場合
        printf("argv[1]: %s\n", argv[1]);
    } else {
        // 直にソースコードを渡された場合
        scanf("%s", s);
        printf("%s\n", s);
    }

    /*
    hello();

    print_source();

    print_99_bottle_of_beer();

    int n = 0;
    increment(n);
    */

    return 0;
}
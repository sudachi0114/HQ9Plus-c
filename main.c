#include <stdio.h>
#include <string.h>

#include "hello.c"
#include "source.c"
#include "99.c"
#include "counter.c"

int main(int argc, char *argv[]) {
    char s[] = "";
    FILE * fp = NULL;

    int n = 0;

    if (argv[1] != NULL) {
        /* ファイルで渡された場合
         * ファイルを開いてソースコードを読み込む
         */
        fp = fopen(argv[1], "r");

        fscanf(fp, "%s", &s);

        fclose(fp);
    } else {
        // 直にソースコードを渡された場合
        scanf("%s", s);
    }

    int length = 0;
    length = strlen(s);

    for (int i=0; i<length; i++) {
        switch (s[i]) {
        case 'H':
            hello();
            break;
        case 'Q':
            printf("%s\n", s);
            break;
        case '9':
            print_99_bottle_of_beer();
        case '+':
            increment(n);
        default:
            break;
        }
    }

    return 0;
}
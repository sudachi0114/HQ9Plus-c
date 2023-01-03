#include <stdio.h>
#include <stdlib.h>

int print_source(void) {
    FILE * fp = NULL;
    fp = fopen(__FILE__, "r");

    int getf;

    while (1)
    {
        getf = fgetc(fp);
        if ( !feof(fp) ) fputc(getf, stdout);
        else break;
    }

    fclose(fp);
    return 0;
}

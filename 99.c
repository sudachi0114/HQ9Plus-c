/*
* 99.c - 99 bottle of beer の詩を表示する
*/

#include <stdio.h>

int main(void) {
    for (int i=99; i>=0; i--) {
        switch (i)
        {
        case 0:
            printf("No more bottles of beer on the wall, no more bottles of beer.\n");
            printf("Go to the store and buy some more, 99 bottles of beer on the wall\n");
            break;
        case 1:
            printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
            printf("Take one down and pass it around, no more bottles of beer on the wall.\n", i-1);
            printf("\n");
            break;
        default:
            printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
            printf("Take one down and pass it around, %d bottles of beer on the wall.\n", i-1);
            printf("\n");
            break;
        }
    }

    return 0;
}
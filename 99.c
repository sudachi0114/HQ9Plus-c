/*
* 99.c - 99 bottle of beer の詩を表示する
*/

#include <stdio.h>

void pass_beer(void) {
    printf("Take one down and pass it around, ");
}

void remaining_beer(int n) {
    printf("%d bottle of beer on the wall.\n", n);
}

void beer_on_the_wall(int n) {
    if (n == 0) {
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("Go to the store and buy some more, ");
    } else {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", n, n);
    }
}

int print_99_bottle_of_beer(void) {
    for (int i=99; i>=0; i--) {
        switch (i)
        {
        case 0:
            beer_on_the_wall(i);
            remaining_beer(99);
            break;
        case 1:
            beer_on_the_wall(i);
            pass_beer();
            printf("no more bottles of beer on the wall.\n");
            printf("\n");
            break;
        default:
            beer_on_the_wall(i);
            pass_beer();
            remaining_beer(i-1);
            printf("\n");
            break;
        }
    }

    return 0;
}
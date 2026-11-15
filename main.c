/*
 * main.c Natalia R
 */

#include <stdio.h>
#include "player.h"

int main(void) {
    struct Player alex;
    struct Player sam;
    struct Player jo;

    /* Make three players */
    init_player(&alex, "Alex Rivera", 7, 12);
    init_player(&sam, "Sam Ortiz", 14, 8);
    init_player(&jo, "Jo Park", 7, 3);

    /* Print two cards */
    print_player(&alex);
    print_player(&sam);

    /* Points */
    printf("points before -> %d\n", get_points(&alex));
    add_points(&alex, 3);
    printf("points after  -> %d\n", get_points(&alex));
    print_player(&alex);

    /* Same jersey and diff jersey */
    printf("same jersey   -> %d\n", same_jersey(&alex, &jo));
    printf("diff jersey   -> %d\n", same_jersey(&alex, &sam));

    /* NULL */
    print_player(NULL);
    printf("NULL points   -> %d\n", get_points(NULL));

    /* Optional one */
    struct Player roster[3];
    init_player(&roster[0], "Alex Rivera", 7, 15);
    init_player(&roster[1], "Sam Ortiz", 14, 8);
    init_player(&roster[2], "Jo Park", 9, 3);

    printf("--- roster ---\n");
    for (int i = 0; i < 3; i++) {
        print_player(&roster[i]);
    }

    return 0;
}

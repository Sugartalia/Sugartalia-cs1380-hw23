/*
 * player.c 
 * Natalia Robertson
 */

#include <stdio.h>
#include <string.h>
#include "player.h"

void print_player(const struct Player *p) {
    if (p == NULL) {
        return;
    }
    printf("Name: %s  Jersey: %d  Points: %d\n", p->name, p->jersey, p->points);
}

void init_player(struct Player *p, const char name[], int jersey, int points) {
    if (p == NULL) {
        return;
    }

    if (name == NULL) {
        p->name[0] = '\0';
    } else {
        strncpy(p->name, name, 31);   
        p->name[31] = '\0';          
    }

    p->jersey = jersey;
    p->points = points;
}

int get_points(const struct Player *p) {
    if (p == NULL) {
        return 0;
    }
    return p->points;
}

void add_points(struct Player *p, int more) {
    if (p == NULL) {
        return;
    }
    p->points = p->points + more;
}

int same_jersey(const struct Player *a, const struct Player *b) {
    if (a == NULL) {
        return 0;
    }
    if (b == NULL) {
        return 0;
    }
    if (a->jersey == b->jersey) {
        return 1;
    }
    return 0;
}

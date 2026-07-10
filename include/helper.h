#ifndef HELPER_H
#define HELPER_H

typedef enum
{
    ROCK,
    PAPER,
    SCISSORS
} Pick;

const char *get_pick_name(Pick pick);

int get_player_pick(char input, Pick *player);

#endif
#include <ctype.h>

#include "../include/helper.h"

const char *get_pick_name(Pick pick)
{
    switch (pick)
    {
    case ROCK:
        return "ROCK";
    case PAPER:
        return "PAPER";
    case SCISSORS:
        return "SCISSORS";
    default:
        return "INVALID";
    }
}

int get_player_pick(char input, Pick *player)
{
    input = tolower((unsigned char)input);

    switch (input)
    {
    case 'r':
        *player = ROCK;
        break;
    case 'p':
        *player = PAPER;
        break;
    case 's':
        *player = SCISSORS;
        break;
    default:
        return 0;
    }
    return 1;
}
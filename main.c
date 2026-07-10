#include <stdlib.h>

enum Pick
{
    ROCK,
    PAPER,
    SCISSORS
};

/*
 * Determines the outcome of a Rock-Paper-Scissors round.
 *
 * Returns:
 *   1  - Player wins
 *   0  - Player loses
 *  -1  - Draw
 *  -2  - Invalid result (should never occur)
 */
int game(enum Pick player, enum Pick computer)
{
    // Draw
    if (player == computer)
        return -1;

    // Rock vs. Paper
    if (player == ROCK && computer == PAPER)
        return 0;
    if (player == PAPER && computer == ROCK)
        return 1;

    // Rock vs. Scissors
    if (player == ROCK && computer == SCISSORS)
        return 1;
    if (player == SCISSORS && computer == ROCK)
        return 0;

    // Scissors vs. Paper
    if (player == SCISSORS && computer == PAPER)
        return 1;
    if (player == PAPER && computer == SCISSORS)
        return 0;

    // Invalid result
    return -2;
}

int main()
{
    return 0;
}
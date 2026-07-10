#include <stdlib.h>
#include <time.h>
#include <stdio.h>

typedef enum
{
    ROCK,
    PAPER,
    SCISSORS
} Pick;

/*
 * Determines the outcome of a Rock-Paper-Scissors round.
 *
 * Returns:
 *   1  - Player wins
 *   0  - Player loses
 *  -1  - Draw
 *  -2  - Invalid result (should never occur)
 */
int game(Pick player, Pick computer)
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

int main()
{
    Pick player, computer;
    int game_result;

    srand(time(NULL));
    computer = rand() % 3;

    printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER, and s for SCISSORS:\n\t\t\t\t\t\t\t");

    char choice;
    if (scanf(" %c", &choice) != 1)
    {
        printf("Failed to read input.\n");
        return 1;
    }

    if (!get_player_pick(choice, &player))
    {
        printf("Invalid choice!\n");
        return 1;
    }

    game_result = game(player, computer);

    if (game_result == -1)
    {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (game_result == 1)
    {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else
    {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

    printf("\nYou chose %s, and the computer chose %s.\n",
           get_pick_name(player),
           get_pick_name(computer));

    return 0;
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "../include/message.h"
#include "../include/game.h"

int main()
{
    Pick player, computer;
    int game_result;

    srand(time(NULL));
    computer = rand() % 3;

    print_intro_message();

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
        print_result_message(
            get_pick_name(player),
            get_pick_name(computer),
            "Both!");
    }
    else if (game_result == 1)
    {
        print_result_message(
            get_pick_name(player),
            get_pick_name(computer),
            "Player");
    }
    else if (game_result == 0)
    {
        print_result_message(
            get_pick_name(player),
            get_pick_name(computer),
            "Computer");
    }
    else
    {
        puts("Invalid result!");
    }

    return 0;
}
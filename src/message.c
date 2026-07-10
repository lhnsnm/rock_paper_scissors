#include <stdio.h>

#include "../include/message.h"

static void print_separator(int type)
{
    if (type == 0)
    {
        puts("========================================");
    }
    else
        puts("------------------------------------");
}

static void print_title(void)
{
    print_separator(0);
    puts("      ROCK PAPER SCISSORS");
    print_separator(0);
}

void print_intro_message(void)
{
    print_title();

    puts("Choose an option:");
    puts("  r - Rock");
    puts("  p - Paper");
    puts("  s - Scissors");
    printf("> ");
}

void print_result_message(const char *player, const char *computer, const char *winner)
{
    print_separator(1);

    puts("Round Result");
    printf("  You      : %s\n", player);
    printf("  Computer : %s\n", computer);
    printf("  Winner   : %s 🎉\n", winner);

    print_separator(1);
}
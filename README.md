# Rock Paper Scissors in C

A simple terminal-based Rock Paper Scissors game written in C. This project was created to practice C programming fundamentals, including enums, functions, header files, modular project structure, and input handling.

## Features

- Play Rock Paper Scissors against the computer
- Random computer move generation
- Input validation
- Case-insensitive player input
- Clean terminal output formatting
- Modular source code organization

## Project Structure

```
.
├── include/
│   ├── game.h
│   ├── helper.h
│   └── message.h
│
├── src/
│   ├── game.c
│   ├── helper.c
│   ├── main.c
│   └── message.c
│
├── Makefile
└── README.md
```

## How It Works

The game uses an enum to represent each possible move:

```c
typedef enum
{
    ROCK,
    PAPER,
    SCISSORS
} Pick;
```

The game logic compares the player's choice and the computer's randomly generated choice to determine the result.

The game function returns:

| Value | Meaning        |
| ----- | -------------- |
| `1`   | Player wins    |
| `0`   | Player loses   |
| `-1`  | Draw           |
| `-2`  | Invalid result |

## Building and Running

### Requirements

- GCC compiler
- Make

### Compile

```bash
make
```

### Run

```bash
make run
```

Or manually:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic src/*.c -o build/main
./build/main
```

## Example Output

```
========================================
      ROCK PAPER SCISSORS
========================================
Choose an option:
  r - Rock
  p - Paper
  s - Scissors
> r

----------------------------------------
You        : ROCK
Computer   : PAPER
Winner     : Computer 🎉
----------------------------------------
```

## Concepts Practiced

This project helped practice:

- C enums
- Header files (`.h`) and source files (`.c`)
- Function declarations and definitions
- Pointers
- Random number generation
- Input validation
- Code organization
- Makefiles
- Modular programming

## Future Improvements

Possible improvements:

- Add multiple rounds
- Add score tracking
- Add difficulty levels
- Add colored terminal output
- Add command-line arguments
- Add automated tests

## Reference

The initial idea for this project was inspired by a [Rock Paper Scissors tutorial](https://www.geeksforgeeks.org/c/rock-paper-scissor-in-c/) from GeeksforGeeks. The implementation was redesigned and rewritten to practice better C project structure and organization.

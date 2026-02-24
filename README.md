# Number Guessing Game

## Description
The "Number Guessing Game" is a simple console-based game written in C.  
The program generates a random number using "rand()" and the player must guess the correct number.

The game uses:
- Random number generation ("rand()")
- Loops for continuous guessing
- Conditional statements to compare guesses
- Score counter based on number of attempts

## Features
- Random number generated between 1 and 100
- Unlimited guessing until correct answer
- Hints ("Too High" / "Too Low")
- Score tracking (number of attempts)
- Simple and interactive console interface

## How the Game Works
1. The program generates a random number.
2. The player enters a guess.
3. The program checks:
   - If guess is too high → Displays "Too High"
   - If guess is too low → Displays "Too Low"
   - If correct → Displays success message
4. The game shows total attempts as the final score.

## Project Structure
-"guessing_game.c" → Main C source file
- (Optional) README.md → Project description file

## How to Compile and Run

### Compile:
bash
gcc guessing_game.c -o guessing_game

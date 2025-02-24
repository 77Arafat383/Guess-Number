# Guess-Number
Guess Correctly is an interactive game based on the Binary Search technique. The goal is to guess a randomly generated number within a specified range using limited attempts. The game progresses through multiple levels, increasing in difficulty. 

Game Structure
The game consists of three main parts:

1. Game Description

Users are introduced to the rules of the game.
Instructions on how to play are provided.
Users can choose to start the game.

2. Gameplay Mechanics

The computer generates a random number within a given range.
Players guess the number by asking limited questions.
The range increases as players progress to higher levels:
Next Level Range = Previous Range × 10
The game runs in a loop, ensuring continuous level updates.
The number of attempts per level is at least O(log(range)).

3. Exit Option

 A quit option is available at any moment, allowing users to leave the game whenever they want.
This feature helps prevent boredom and ensures user control.



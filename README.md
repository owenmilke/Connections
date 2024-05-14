# M1OEP-omilke
<h3>Owen Milke CS2300B Open-Ended Project</h2>

<h3>Program Summary:</h2>
<h4>Basic Description:</h4>
My program is a version of the popular New York Times Game: Connections.
There are 24 categories with 4 words tied to each category for a total of 96 possible words.
At the start of the program/game 4 of the 24 possible categories are chosen and then the player
must correctly guess which words are related to each other while only having 4 lives/guesses to do so.

<h4>Detailed Description:</h4>
When the program is run 4 of the 24 possible categories are chosen at random and their associated
words are added to a vector of words that can be guessed by the player. Once the game starts the
player must choose 4 of the 16 total words that they think share a connection, then their guessed
words are added to an array that is then compared to the category arrays to determine correctness.
If the player's guess is correct, they are notified and the correctly guessed words are removed
from play along with the number of remaining categories. If the player's guess is incorrect, they are
notified and one of their lives/guesses is removed. The game ends after the player either correctly
guesses all the categories, or if they run out of lives/guesses. Depending on how the game ended,
the final output either reflects their victory or loss. No matter if the player wins or loses, all
the categories the user was guessing are revealed and the program ends.

<h3>Module 1 Concepts Used:</h3>
* Enumerated type Categories
* Overloaded print operator for printing Categories
* Connections class separated into Connections.h and Connections.cpp
* Input validation for getting a word from the player (brought over from my M1AP code)
* An array comparison function for determining if 2 arrays contain the same contents
* A function that gets the index of an element in a vector

<h3>Known Bugs:</h3>
While it may not necessarily be a "bug", even though the player's input has validation, it is
mainly for an empty input or for if there is a space in the player's input. As such, input
must be very specific, which I will touch on more in the "Future Work" section. Another possible
bug can happen if a user enters 4 words in a category that is not displayed as it will still
be marked as correct and then those words will not be able to be removed from the words array.

<h3>Future Work:</h3>
There are a few improvements to this program that I would make if I had more time and some
additional knowledge of C++.
* Adding more input validation to user guessing, such as case insensitve guesses and being notified if a guess is not in the available words which would make the program a bit more user-friendly.
* Changing/simplifying the process for finding words in a category. Currently, it takes long series of if-else statements to determine which words need to be added to the guess list and if a user's words match any categories.
* Finding a way to tie Categories to their words. I wasn't sure how to do this in C++ which is why there is a lot of hard coding of arrays and if-else statements. This could also make the program more modular.
* Displaying which category has been correctly guessed immediately after guessing. This is again related to tying Categories to their words.

<h3>Expected Grade:</h3>
I am happy with the current state of my program, however I do know that there are some gameplay changes
and a fair amount of my code that I hard coded because I couldn't figure out how to tie the enumerated
Categories to their own sets of connected words. That being said, I do believe that the program showcases
many concepts from Module 1, while also having input validation that is explained for the user, as well as
being a fairly complex program compared to the guided and applied projects from Module 1. I believe that
my class is designed well and all functions are implemented and used throughout the program. I think that
my concept is good and works well for this type of project and the enumerated type and overloaded operator
are used in a way that makes sense, although I could see losing points because of the hard coding I used
in my main file. I included lots of documentation throughout all files and separated my .h and .cpp files.
My video includes multiple program runs and some examples of input validation. I created the repository
for this project 7 days ago and have been making contributions for 3 days so technically this should meet
the lifespan requirement, but I could see losing 5 points because of the spacing of contributions.

Overall, after looking at the rubric, I could see getting between 50-60 points depending on how much of a
detriment my hard coding and lifespan contributions are.
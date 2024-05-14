/*
 * Owen Milke
 * CS2300B
 */

#include "Connections.h"

using namespace std;

/**
 * Input validation for getting a single word from the user.
 * @return the word entered by the user after it has passed all input validation checks.
 */
string getWordFromUser();

int main() {
    /*
     * Total of 24 possible arrays and 96 possible words that correspond to those arrays that can show
     * up during a game of Connections.
     */
    string biomesWords[4] = {"Desert", "Forest", "Grassland", "Tundra"};
    string stormsWords[4] = {"Blizzard", "Cyclone", "Squall", "Tornado"};
    string cocktailsWords[4] = {"Cosmopolitan", "Hurricane", "Manhattan", "Screwdriver"};
    string apparitionsWords[4] = {"Ghost", "Phantom", "Spector", "Spirit"};
    string fabricsWords[4] = {"Corduroy", "Denim", "Linen", "Tweed"};
    string relativesWords[4] = {"Aunt", "Cousin", "Mother", "Nephew"};
    string anagramsWords[4] = {"Least", "Slate", "Stale", "Tesla"};
    string coveringsWords[4] = {"Cap", "Cover", "Lid", "Top"};
    string sunglassesWords[4] = {"Aviator", "Cateye", "Wayfarer", "Wraparound"};
    string hairstylesWords[4] = {"Bob", "Crop", "Pixie", "Shag"};
    string treesWords[4] = {"Ash", "Cedar", "Maple", "Pine"};
    string marsupialsWords[4] = {"Kangaroo", "Koala", "Wallaby", "Wombat"};
    string jointsWords[4] = {"Hip", "Knee", "Shoulder", "Wrist"};
    string fishWords[4] = {"Tang", "Tetra", "Skate", "Sole"};
    string boatsWords[4] = {"Ferry", "Junk", "Tug", "Yacht"};
    string mustachesWords[4] = {"Handlebar", "Horseshoe", "Pencil", "Walrus"};
    string grainsWords[4] = {"Barley", "Oat", "Rye", "Spelt"};
    string universitiesWords[4] = {"Brown", "Duke", "Howard", "Rice"};
    string bedsWords[4] = {"Bunk", "Canopy", "Murphy", "Trundle"};
    string hondasWords[4] = {"Accord", "Civic", "Passport", "Pilot"};
    string homophonesWords[4] = {"Gnu", "Knew", "New", "Nu"};
    string birdsWords[4] = {"Crane", "Jay", "Swallow", "Turkey"};
    string influenceWords[4] = {"Clout", "Pull", "Sway", "Weight"};
    string fontsWords[4] = {"Courier", "Impact", "Papyrus", "Times"};

    // Vector of enumerated type categories with all 24 categories implemented.
    vector<Connections::Categories> categories = {Connections::biomes, Connections::storms, Connections::cocktails,
                                                  Connections::apparitions, Connections::fabrics, Connections::relatives,
                                                  Connections::anagrams, Connections::coverings, Connections::sunglasses,
                                                  Connections::hairstyles, Connections::trees, Connections::marsupials,
                                                  Connections::joints, Connections::fish, Connections::boats,
                                                  Connections::mustaches, Connections::grains, Connections::universities,
                                                  Connections::beds, Connections::hondas, Connections::homophones,
                                                  Connections::birds, Connections::influence, Connections::fonts};

    // Vector of enumerated type categories that randomly chosen categories will be placed into.
    vector<Connections::Categories> chosenCategories;

    // Vector of strings that words from the randomly chosen categories will be placed into.
    vector<string> words;

    // Default Connections constructor.
    Connections connections;

    // Random device creation and randomization of the order of all 24 categories.
    random_device rd;
    shuffle(categories.begin(), categories.end(), rd);

    // Takes the first 4 randomized categories and places them into the chosenCategories vector.
    for (int i = 0; i < 4; i++) {
        chosenCategories.push_back(categories[i]);
    }

    /*
     * If-else statement that determines which 4 random categories have been chosen and places their
     * corresponding words into a vector.
     */
    for (Connections::Categories category : chosenCategories) {
        if (category == Connections::biomes) {
            for (string word : biomesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::storms) {
            for (string word : stormsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::cocktails) {
            for (string word : cocktailsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::apparitions) {
            for (string word : apparitionsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::fabrics) {
            for (string word : fabricsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::relatives) {
            for (string word : relativesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::anagrams) {
            for (string word : anagramsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::coverings) {
            for (string word : coveringsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::sunglasses) {
            for (string word : sunglassesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::hairstyles) {
            for (string word : hairstylesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::trees) {
            for (string word : treesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::marsupials) {
            for (string word : marsupialsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::joints) {
            for (string word : jointsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::fish) {
            for (string word : fishWords) {
                words.push_back(word);
            }
        } else if (category == Connections::boats) {
            for (string word : boatsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::mustaches) {
            for (string word : mustachesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::grains) {
            for (string word : grainsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::universities) {
            for (string word : universitiesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::beds) {
            for (string word :bedsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::hondas) {
            for (string word : hondasWords) {
                words.push_back(word);
            }
        } else if (category == Connections::homophones) {
            for (string word : homophonesWords) {
                words.push_back(word);
            }
        } else if (category == Connections::birds) {
            for (string word : birdsWords) {
                words.push_back(word);
            }
        } else if (category == Connections::influence) {
            for (string word : influenceWords) {
                words.push_back(word);
            }
        } else if (category == Connections::fonts) {
            for (string word : fontsWords) {
                words.push_back(word);
            }
        } else {
            cout << "Error" << endl;
        }
    }

    // Randomizes the order of words in the vector of playable words.
    shuffle(words.begin(), words.end(), rd);

    // Sorts the contents off all category arrays into alphabetical order for comparison later on.
    sort(begin(biomesWords), end(biomesWords));
    sort(begin(stormsWords), end(stormsWords));
    sort(begin(cocktailsWords), end(cocktailsWords));
    sort(begin(apparitionsWords), end(apparitionsWords));
    sort(begin(fabricsWords), end(fabricsWords));
    sort(begin(relativesWords), end(relativesWords));
    sort(begin(anagramsWords), end(anagramsWords));
    sort(begin(coveringsWords), end(coveringsWords));
    sort(begin(sunglassesWords), end(sunglassesWords));
    sort(begin(hairstylesWords), end(hairstylesWords));
    sort(begin(treesWords), end(treesWords));
    sort(begin(marsupialsWords), end(marsupialsWords));
    sort(begin(jointsWords), end(jointsWords));
    sort(begin(fishWords), end(fishWords));
    sort(begin(boatsWords), end(boatsWords));
    sort(begin(mustachesWords), end(mustachesWords));
    sort(begin(grainsWords), end(grainsWords));
    sort(begin(universitiesWords), end(universitiesWords));
    sort(begin(bedsWords), end(bedsWords));
    sort(begin(hondasWords), end(hondasWords));
    sort(begin(homophonesWords), end(homophonesWords));
    sort(begin(birdsWords), end(birdsWords));
    sort(begin(influenceWords), end(influenceWords));
    sort(begin(fontsWords), end(fontsWords));

    // Initial game start and instruction prompt.
    cout << "Welcome to Connections!" << endl;
    cout << "16 words will be displayed that connect to 4 random categories (4 words per category)." << endl;
    cout << "You have 4 lives/guesses to complete all 4 categories and will be prompted for each word you enter." << endl;
    cout << "Good luck!" << endl;
    cout << endl;

    // An empty string for the user's words to be placed into.
    string userWords[4];

    /*
     * While loop that contains the input and decision-making elements of the Connections game.
     * Game is active while the player either has not run out of lives/guesses, or while they have not correctly
     * guessed all 4 categories.
     */
    while (connections.lives > 0 && connections.remaining != 0) {
        // Output that shows the user their amount of categories and lives remaining.
        cout << endl;
        cout << "Categories Remaining: " << connections.remaining << endl;
        cout << "Lives: " << connections.lives << endl;
        cout << endl;
        // Prints out each guessable word.
        for (string word : words) {
            cout << word << " ";
        }
        cout << endl;
        /* Individually prompts for each word the user believes to be in the category.
         * Implements the getWordFromUser function.
         */
        for (int i = 0; i < 4; i++) {
            cout << "Word #" << i + 1 << ":" << endl;
            string userWord = getWordFromUser();
            cout << endl;
            userWords[i] = userWord;
        }
        cout << endl;
        // Sorts the user's entered words into alphabetical order for comparison.
        sort(begin(userWords), end(userWords));
        /* If-else statement that checks if the user's entered words align with any of the possible categories
         * as long as a correct guess has not been made.
         */
        if (!connections.correct) {
            if (connections.completeCategory(userWords, biomesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, stormsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, cocktailsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, apparitionsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, fabricsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, relativesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, anagramsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, coveringsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, sunglassesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, hairstylesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, treesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, marsupialsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, jointsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, fishWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, boatsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, mustachesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, grainsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, universitiesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, bedsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, hondasWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, homophonesWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, birdsWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, influenceWords)) {
                connections.setCorrect();
            } else if (connections.completeCategory(userWords, fontsWords)) {
                connections.setCorrect();
            }
        }
        /*
         * If-else statement that depends on the user's entered words correctly matched a category.
         * If guess was incorrect, 1 life/guess is subtracted.
         * If guess was correct, the correctly guessed words are removed from the vector of choosable words,
         * the number of remaining categories is reduced by 1, and the user is notified of their correct guess.
         */
        if (!connections.correct) {
            cout << "Incorrect!" << endl;
            connections.loseLife();
        }
        else {
            for (string word : userWords) {
                words.erase(words.begin() + connections.getIndex(words, word));
            }
            cout << "Correct!" << endl;
            connections.getRight();
        }

        // Sets the condition of the correct guess to false
        connections.setFalse();
    }
    /* Determines final print output based off of how the game ended.
     * If the game ended with all categories being correctly guessed, the user is notified that they have won
     * the game and is thanked for playing.
     * If the game ended with all possible lives/guesses removed, the user is notified that they lost the game.
     */
    if (connections.remaining == 0) {
        cout << "Congratulations! You Won!" << endl;
        cout << "The categories were: " << chosenCategories[0] << ", " << chosenCategories[1] << ", " <<
             chosenCategories[2] << ", " << chosenCategories[3] << endl;
        cout << "Thanks for playing! :)" << endl;
    } else {
        cout << "Sorry you ran out of guesses." << endl;
        cout << "The categories were: " << chosenCategories[0] << ", " << chosenCategories[1] << ", " <<
             chosenCategories[2] << ", " << chosenCategories[3] << endl;
        cout << "Better luck next time :(" << endl;
    }

    return 0;
}

/**
 * Input validation for getting a single word from the user.
 * @return the word entered by the user after it has passed all input validation checks.
 */
string getWordFromUser() {
    string userWord;
    cout << "Enter a single word from the list above with proper capitalization (ex: Climate): ";

    while (getline(std::cin, userWord)) {
        if (empty(userWord)) {
            cout << "No input. Enter a single word from the list above: ";
            cin.clear();
        } else if (userWord.find(' ') >= 0 && userWord.find(' ') <= userWord.length()) {
            cout << "Invalid input. Enter a single word from the list above: ";
            cin.clear();
        } else {
            break;
        }
    }

    return userWord;
}
/*
 * Owen Milke
 * CS2300B
 */

#include "Connections.h"

/**
 * The default Connections constructor. Sets lives/guesses to 4, remaining categories to 4,
 * the correctness of a user's guess to false.
 */
Connections::Connections() : lives(4), remaining(4), correct(false) {}

/**
 * Subtracts a life/guess.
 */
void Connections::loseLife() {
    lives--;
}

/**
 * Removes the number of available categories.
 */
void Connections::getRight() {
    remaining--;
}

/**
 * Sets correct to true.
 */
void Connections::setCorrect() {
    correct = true;
}

/**
 * Sets correct to false.
 */
void Connections::setFalse() {
    correct = false;
}

/**
 * Determines if a user's guess correctly aligns with the contents of a category.
 * @param arr1 The first array to be compared (the user's array in my code).
 * @param arr2 The second array to be compared (the category array in my code).
 * @return true if the two arrays contain the same elements, false otherwise.
 */
bool Connections::completeCategory(std::string arr1[], std::string arr2[]) {
    for (int i = 0; i < 4; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

/**
 * Gets the index of an element in a vector.
 * @param v the vector.
 * @param s the string located in the vector that's index we want.
 * @return the index of where the chosen string is inside the vector.
 */
int Connections::getIndex(std::vector<std::string> v, std::string s) {
    auto element = find(v.begin(), v.end(), s);
    int index = element - v.begin();
    return index;
}
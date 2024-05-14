/*
 * Owen Milke
 * CS2300B
 */

#ifndef M1OEP_OMILKE_MAIN_H
#define M1OEP_OMILKE_MAIN_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

/**
 * Header file for Connections game that includes the enumerated type Categories, the amount of lives/guesses
 * in a game, the condition of whether a user's guess was correct or not, the amount of categories remaining,
 * as well as functions for removing lives/guesses, removing categories remaining, setting correctness to
 * true or false, a function to determine if a category is completed, a function to get the index of an element
 * in a vector, and an overloaded print operator for printing the enumerated type Categories.
 */
class Connections {
public:
    /**
     * The enumerated type for all 24 possible categories in the game.
     */
    enum Categories {biomes, storms, cocktails, apparitions, fabrics, relatives, anagrams, coverings, sunglasses,
        hairstyles, trees, marsupials, joints, fish, boats, mustaches, grains, universities, beds,
        hondas, homophones, birds, influence, fonts};

    /**
     * The lives/guesses the user has.
     */
    int lives;

    /**
     * The remaining categories that have not been guessed.
     */
    int remaining;

    /**
     * A boolean that determines the correctness of a user's guess.
     */
    bool correct;

    /**
     * The default constructor.
     */
    Connections();

    /**
     * Subtracts a life/guess.
     */
    void loseLife();

    /**
     * Removes the number of available categories.
     */
    void getRight();

    /**
     * Sets correct to true.
     */
    void setCorrect();

    /**
     * Sets correct to false.
     */
    void setFalse();

    /**
     * Determines if a user's guess correctly aligns with the contents of a category.
     * @param arr1 The first array to be compared (the user's array in my code).
     * @param arr2 The second array to be compared (the category array in my code).
     * @return true if the two arrays contain the same elements, false otherwise.
     */
    bool completeCategory(std::string arr1[4], std::string arr2[4]);

    /**
     * Gets the index of an element in a vector.
     * @param v the vector.
     * @param s the string located in the vector that's index we want.
     * @return the index of where the chosen string is inside the vector.
     */
    int getIndex(std::vector<std::string> v, std::string s);

    /**
     * Overloaded print operator for printing Categories.
     * @param output the printing output.
     * @param category the enumerated type Categories.
     * @return the overloaded print output for the enumerated type Categories.
     */
    friend std::ostream &operator << (std::ostream& output, Categories category) {
        const std::string categoryName[] = {"Biomes", "Storms", "Cocktails", "Apparitions", "Fabrics",
                                            "Relatives", "Anagrams", "Coverings", "Sunglasses",
                                            "Hairstyles", "Trees", "Marsupials", "Joints", "Fish",
                                            "Boats", "Mustaches", "Grains", "Universities", "Beds",
                                            "Hondas", "Homophones", "Birds", "Influence", "Fonts"};
        return output << categoryName[category];
    }

};

#endif

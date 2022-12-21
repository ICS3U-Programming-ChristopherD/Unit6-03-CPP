// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date : Dec 15, 2022
// This program prints the lowest value of ten randomly
// generated numbers

#include <time.h>
#include <array>
#include <iostream>

/*Initializes max array size as a global variable so it
can be used inside parameters within function parameters*/
const int MAX_ARRAY_SIZE = 10;

int minNumber(std::array<int, MAX_ARRAY_SIZE> numberArray) {
    int lowestNum = 101;

    /*Gets the smallest number by iterating through the array of
    numbers and replacing the lowest number with the current
    element if it is smaller than the previous highest number*/

    for (int counter : numberArray) {
        if (counter < lowestNum) {
            lowestNum = counter;
        }
    }

    return lowestNum;
}

int main() {
    // Initializing variables & array
    const int MIN_NUM = 0, MAX_NUM = 100;
    int randomNumber, lowestNum;
    std::array<int, MAX_ARRAY_SIZE> randomNumbers;

    srand(time(NULL));

    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number from 0-100
        randomNumber = (rand() % MAX_NUM + 1) + MIN_NUM;

        // Appends the number to the array
        randomNumbers[counter] = randomNumber;

        // Prints random number added to list
        std::cout << randomNumber << " added to array at index "
                  << counter << "\n";
    }

    lowestNum = minNumber(randomNumbers);

    // Prints the lowest number in the list
    std::cout << "The lowest value is: " << lowestNum << std::endl;
}

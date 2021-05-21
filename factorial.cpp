// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 21, 2021
// This program calculates the factorial of number

#include <iostream>
#include <cmath>

// variables
int userNum;
int factorialNum;
int counter;

int main() {
    // make the string version of the var
    std::string userNumStr;

    // get the number from the user
    std::cout << "What is the number: ";
    std::cin >> userNumStr;

    try {
        // try to turn it into a integer
        userNum = std::stoi(userNumStr);

        // if number is greater than or = to 0
        if (userNum >= 0) {
            // if number is = to 0
            if (userNum != 0) {
                // reset and define the variables
                factorialNum = 1;
                counter = 0;

                // the do while loop
                do {
                    // change the couter and calculate the
                    // factorial for this term
                    counter = counter + 1;
                    factorialNum = factorialNum * counter;

                // once the counter is greater than userNum
                // it will stop the loop
                } while (counter < userNum);
                // print the results to the user
                std::cout << userNum << " factorial is " << factorialNum;
            } else {
                // if userNum = 0
                std::cout << userNum << " factorial is 1";
            }
            // if userNum is negative
        } else {
            std::cout << userNum << " is not positive";
        }


    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid input";
    }
}

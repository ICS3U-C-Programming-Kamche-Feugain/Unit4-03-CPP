// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Nov 12, 2026
// This program asks the user
// to make a while loop program
// make the users number false.
#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int number = 0;
    int square = 0;
    std::string number_str;

    // Get the user's number
    try {
        std::cout << "Enter a positive whole number: ";
        std::cin >> number_str;
        number = stoi(number_str);

        // Check if number is negative
        if (number < 0) {
            std::cout << number_str
                      << " is an invalid entry."
                         "Please enter a positive whole number."
                      << std::endl;
        } else {
            // Calculate the square using a for loop
            for (int i = 0; i <= number; i++) {
                square = i * i;
                std::cout << i << " ^2 = " << square << std::endl;
            }
        }
    } catch (const std::invalid_argument& e) {
        std::cout << number_str
                  << " is an invalid input.Please enter a whole number."
                  << std::endl;
    }
    std::cout << "Thanks for playing!!" << std::endl;

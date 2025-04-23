// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program sums from 0 to a user-entered whole number
#include <iostream>

int main() {
    // Initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int userNum;

    // Get the user number
    std::cout << "Enter a number (positive or negative): ";
    std::cin >> userNum;
    std::cout << std::endl;

    // Check if the number is positive or negative
    if (userNum >= 0) {
        // Calculate the sum of all numbers
        while (counter <= userNum) {
            sum = sum + counter;
            std::cout << "Tracking " << counter << " times through the loop.\n";
            counter = counter + 1;
        }
    } else {
        // If the number is negative
        while (counter >= userNum) {
            sum = sum + counter;
            std::cout << "Tracking " << counter << " times through the loop.\n";
            counter = counter - 1;
        }
    }

    // Display the sum to the user
    std::cout << "\nThe sum of the numbers from 0 to " << userNum
              << " is: " << sum << std::endl;
}

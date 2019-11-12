// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on November 2019
// This program asks user to enter how many numbers
// they want to add. User enters numbers that are
// to be added, but only positive integers are added


#include <iostream>
#include <string>

int main() {
  std::string input1;
  std::string input2;
  int loopCounter = 0;
  int userLoops = 0;
  int userNtry = 0;
  int evenAnswer = 0;
  int oddAnswer = 0;
  int negAnswer = 0;

  std::cout << "This will add and print out all positive and odd numbers"
            << std::endl;
  std::cout << "and the sum of all negative numbers" << std::endl;
  std::cout << "\n";

  std::cout << "How many numbers would you like to add: ";
  std::cin >> input1;

  try {
    userLoops = std::stoi(input1);
    for (loopCounter; loopCounter < userLoops; loopCounter++) {
      std::cout << "Enter a number you would like to add: ";
      std::cin >> input2;
      try {
        userNtry = std::stoi(input2);
        if (userNtry > 0) {
          if (userNtry % 2 == 0) {
            evenAnswer = evenAnswer + userNtry;
          } else {
            oddAnswer = oddAnswer + userNtry;
          }
        } else {
          negAnswer = negAnswer + userNtry;
        }
      } catch (std::invalid_argument) {
        std::cout << "Enter an integer. ";
        std::cout << "\n";
      }
    }
    std::cout << "\n";
    std::cout << "The sum of positive even numbers is: " << evenAnswer
              << std::endl;
    std::cout << "The sum of positive odd numbers is: " << oddAnswer
              << std::endl;
    std::cout << "The sum of negative numbers is: " << negAnswer
              << std::endl;
  } catch (std::invalid_argument) {
    std::cout << "Invalid Input" << std::endl;
  }
}

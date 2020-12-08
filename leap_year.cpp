// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program uses a compound booleam statement

#include <iostream>

int main() {
    // this fuction uses a compound booleam statement
    int year;

    // input
    std::cout << "Enter the year: ";
    std::cin >> year;

    // process & output
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            std::cout << "It is not a leap year";
        } else {
            std::cout << "It is a leap year";
        }
    } else {
        std::cout << "It is not a leap year";
    }
}

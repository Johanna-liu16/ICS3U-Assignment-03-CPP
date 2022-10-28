// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Oct 2022
// This program calculates the volume of a cone

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAX = 1.13;
    std::string stringUnitAmount;
    int unitAmount;
    int unitPrice = 100;
    double discount = 0.10;
    double plusDiscount;
    double subTotal;
    double total;

    // input
    std::cout << "This program calculates the amount you will pay.";
    std::cout << std::endl;
    std::cout << "One unit is $100.\n";
    std::cout << std::endl;
    std::cout << "Enter the amount of units you want to buy: ";
    std::cin >> stringUnitAmount;

    // process and output
    try {
        unitAmount = std::stoi(stringUnitAmount);
        if (unitAmount >= 1000) {
            subTotal = unitAmount * unitPrice;
            plusDiscount = subTotal - (subTotal * discount);
            total = plusDiscount * TAX;
            std::cout << "You received a 10% discount!";
            std::cout << "Your total is $" << total << ".";
        } else {
            subTotal = unitAmount * unitPrice;
            total = subTotal * TAX;
            std::cout << "Your total is $" << total << ".";
            }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}

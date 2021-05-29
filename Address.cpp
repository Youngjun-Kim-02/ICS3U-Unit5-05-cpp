// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>

std::string address(std::string firstName, std::string lastName,
                    std::string streetNumber, std::string streetName,
                    std::string city, std::string province,
                    std::string firstPostalCode, std::string lastPostalCode,
                    std::string apartmentNumber = "") {

    std::string address;
    address = firstName + " " + lastName + "\n";
    if (apartmentNumber.size() != 0) {
        address = address + apartmentNumber + "-";
    }
    address = address + streetNumber;
    address = address + " " + streetName;
    address = address + "\n" + city;
    address = address + " " + province;
    address = address + "  " + firstPostalCode;
    address = address + " " + lastPostalCode;

    return address;
}


main() {
    // gets function gets information of the user

    std::string firstName;
    std::string lastName;
    std::string question;
    std::string apartmentNumber = "";
    std::string streetNumber;
    std::string streetName;
    std::string city;
    std::string province;
    std::string firstPostalCode;
    std::string lastPostalCode;
    std::string mailingAddress;

    // input
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "Do you live in an apartment? (y/n): ";
    getline(std::cin, question) >> question;
    if (question == "y" || question == "YES") {
        std::cout << "Enter your apartment number: ";
        std::cin >> apartmentNumber;
    }
    std::cout << "Enter your street number: ";
    std::cin >> streetNumber;
    std::cout << "Entet your street name: ";
    std::cin >> streetName;
    std::cout << "Enter your city: ";
    getline(std::cin, city) >> city;
    std::cout << "Enter your province: ";
    std::cin >> province;
    std::cout << "Enter your first postal code: ";
    std::cin >> firstPostalCode;
    std::cout << "Enter your last postal code: ";
    std::cin >> lastPostalCode;

    // call function
    if (apartmentNumber != "") {
        mailingAddress = address(firstName, lastName, streetNumber,
                                 streetName, city, province, firstPostalCode,
                                 lastPostalCode, apartmentNumber);
    } else {
        mailingAddress = address(firstName, lastName, streetNumber, 
                                 streetName, city, province, firstPostalCode,
                                 lastPostalCode);
    }
    std::cout << " " << std::endl;
    std::cout << mailingAddress;
}

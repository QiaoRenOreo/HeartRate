/*
 * main.cpp
 *
 *  Created on: 7 Feb 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#include "HeartRates.h"
#include <iostream>

int main()
{
	HeartRates person1("test");			// Instantiate person

	// User input section:
	std::string givenName;
	std::cout << "Enter given name: ";
	std::getline(std::cin, givenName);
    person1.setGivenName(givenName);

	std::string FamilyName;
	std::cout << "Enter family name: ";
	std::getline(std::cin, FamilyName);
    person1.setFamilyName(FamilyName);

	int BirthDay;
	std::cout << "Enter birth day: ";
	std::cin >> BirthDay;
    person1.setBDay(BirthDay);

	int BirthMonth;
	std::cout << "Enter birth month: ";
	std::cin >> (std::cin, BirthMonth);
    person1.setBMonth(BirthMonth);

	int BirthYear;
	std::cout << "Enter birth year: ";
	std::cin >> (std::cin, BirthYear);
    person1.setBYear(BirthYear);

    // Console output section:
    std::cout << "Name: "
              << person1.getGivenName() << " " << person1.getFamilyName()
              << std::endl;

    std::cout << "Age: "
              << person1.getAge()
              << std::endl;

    person1.getTargetHeartRate();

    return 0;
}



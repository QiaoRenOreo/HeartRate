/*
 * HeartRates.cpp
 *
 *  Created on: 7 Feb 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#include "HeartRates.h"
#include <iostream>

// Functions to access the private variables:
HeartRates::HeartRates(std::string name)
{
	setGivenName(givenName);
}

void HeartRates::setGivenName(std::string name)
{
    givenName = name;
    return;
}

std::string HeartRates::getGivenName()
{
    return givenName;
}

void HeartRates::setFamilyName(std::string name)
{
    familyName = name;
    return;
}

std::string HeartRates::getFamilyName()
{
    return familyName;
}

void HeartRates::setBDay(int date)
{
	if ((date >=1)&& (date<=31))				// Check date validity
	{
		bDay = date;
		return;
	}
	std::cout << "Invalid date!" << std::endl;
}

int HeartRates::getBDay()
{
    return bDay;
}

void HeartRates::setBMonth(int date)
{
	if ((date >=1)&& (date<=12))				// Check date validity
	{
		bMonth = date;
		return;
	}
	std::cout << "Invalid date!" << std::endl;
}

int HeartRates::getBMonth()
{
    return bMonth;
}

void HeartRates::setBYear(int date)
{
	if (date>=1970)								// Check date validity
	{											// UNIX time starts at 1970.
		bYear = date;
		return;
	}
	std::cout << "Cannot handle years before 1970. Sorry!" << std::endl;
}

int HeartRates::getBYear()
{
    return bYear;
}

int HeartRates::getAge()
{
	int age;
	struct tm date = {0};						// Declare and initialise time struct
    date.tm_year = getBYear()-1900;
    date.tm_mon  = getBMonth()-1;
    date.tm_mday = getBDay();
    time_t simpleTime = mktime(&date);			// Convert time for future calculations

    // Get current date from system clock instead of requiring user input:
    time_t today = time(&today);

    // Convert seconds to days:
    long d = (difftime(today, simpleTime) + 86400L/2) / 86400L;

    age = d/365;								// Convert days to years
    return age;
}

int HeartRates::getMaximumHeartRate()
{
	int age = getAge();
	return 220-age;
}

void HeartRates::getTargetHeartRate()
{
	int maxHearRate = getMaximumHeartRate();
	int minTarget = maxHearRate*0.5;			// Person's maximum target heart rate
	int maxTarget = maxHearRate*0.85;			// Person's minimum target heart rate

	std::cout << "Your target heart rate range is from "
			  << minTarget << " to " << maxTarget << "."
			  << std::endl;
}

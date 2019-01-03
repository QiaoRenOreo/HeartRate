/*
 * HeartRates.h
 *
 *  Created on: 7 Feb 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#include <string>

class HeartRates
{
public:
	HeartRates(std::string name);			// Constructor

	// Functions to access the private variables:
    void setGivenName(std::string name);
    std::string getGivenName();

    void setFamilyName(std::string name);
    std::string getFamilyName();

    void setBDay(int date);
    int getBDay();

    void setBMonth(int date);
    int getBMonth();

    void setBYear(int date);
    int getBYear();

    int getAge();

    int getMaximumHeartRate();
    void getTargetHeartRate();

private:
	std::string givenName;
	std::string familyName;
	int bDay;
	int bMonth;
	int bYear;
	int age;
};

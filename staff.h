/*
 * staff.h
 *
 *  Created on: Nov 17, 2023
 *      Author: NBNB
 */

#ifndef STAFF_H_
#define STAFF_H_
#include <iostream>
#include<string>
using namespace std;
class Staff{
private:
	string firstname,lastname,dateofhiring,bonusCode;
	int ID;
	double currentSalary;
public:
	Staff();

	string getFirstname();
	void setFirstname(string);

	string getLastname();
	void setLastname(string);

	string getDateofhiring();
	void setDateofhiring(string);

	int getID();
	void setID(int);

	string getBonuscode();
	void setBonuscode(string);

	double getCurrentsalary();
	void setCurrentsalary(double);

	void Print_stf_Info();

	void Calculate_Salary();
};




#endif /* STAFF_H_ */

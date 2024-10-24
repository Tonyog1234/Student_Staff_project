/*
 * student.h
 *
 *  Created on: Nov 17, 2023
 *      Author: NBNB
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include<string>
using namespace std;
class Student{
private:
	string firstname, lastname, dateofbirth, program;
	int ID,startYear;
	double GPA, completedCredit;
public:
	Student();



	Student(string,string,int,string,double,int,double,string);

	string getFirstname();
	void setFirstname(string);

	string getLastname();
	void setLastname(string);

	string getdateofbirth();
	void setDateofbirth(string);

	string getProgram();
	void setProgram(string);

	int getID();
	void setID(int);

	int getStartyear();
	void setStartyear(int);

	double getGPA();
	void setGPA(double);

	double getCompletedCredit();
	void setCompletedCredit(double);

	bool CompleteProgram();

	string StudentStatus();

	void Print_Std_Info();

};




#endif /* STUDENT_H_ */

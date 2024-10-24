/*
 * Student_staff.h
 *
 *  Created on: Nov 17, 2023
 *      Author: NBNB
 */

#ifndef STUDENT_STAFF_H_
#define STUDENT_STAFF_H_
#include <iostream>
#include<string>
#include"student.h"
#include"staff.h"
using namespace std;

class Student_staff{
private:
	Student *studentPtr ;
	Staff *staffPtr;
	int studentArraySize=0;
	int staffnumber=0;
public:
	Student_staff();
	Student* getstudentPtr();
	int getstudentSize();

	Staff* getstaffPtr();
	int getstaffSize();
	void Highest_GPA(Student*,int);
	int N_of_UnderGrad(Student*, int);
	void Same_Hire_Year(Staff*,int,string);


};




#endif /* STUDENT_STAFF_H_ */

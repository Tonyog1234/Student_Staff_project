/*
 * studentIMP.cpp
 *
 *  Created on: Nov 17, 2023
 *      Author: NBNB
 */
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
#include"student.h"


Student::Student(){};
Student::Student(string first,string last,int ID,string birth,double GPA,int start,double credit,string program){
	setFirstname(first);
	setLastname(last);
	setID(ID);
	setDateofbirth(birth);
	setGPA(GPA);
	setStartyear(start);
	setCompletedCredit(credit);
	setProgram(program);



}



string Student::getFirstname(){
		return firstname;
}
void Student::setFirstname(string a){
		firstname=a;
}

string Student::getLastname(){
	return lastname;
}
void Student::setLastname(string a){
	lastname=a;
}

string Student::getdateofbirth(){
	return dateofbirth;
}
void Student::setDateofbirth(string a){
	dateofbirth=a;
}

string Student::getProgram(){
	return program;
}
void Student::setProgram(string a){
	program=a;
}

int Student::getID(){
	return ID;
}
void Student::setID(int a){
	ID=a;
}

int Student::getStartyear(){
	return startYear;
}
void Student::setStartyear(int a){
	startYear=a;
}

double Student::getGPA(){
	return GPA;
}
void Student::setGPA(double a){
	GPA=a;
}

double Student::getCompletedCredit(){
	return completedCredit;
}
void Student::setCompletedCredit(double a){
	completedCredit=a;
}

bool Student::CompleteProgram(){
	if(program=="bachelor" && completedCredit>=140){
		return true;
	}

	else if(program=="Master" && completedCredit>=16){
			return true;
		}

	else if(program=="Ph.D" && completedCredit>=12){
			return true;
		}
	else
			return false;
}

string Student::StudentStatus(){
	if(GPA>=3.5){
		return "A+";
	}
	else if(GPA>=3 && GPA<3.5){
		return "A";
	}
	else if(GPA>=2.5 && GPA<3){
		return "B";
	}
	else if(GPA>=2 && GPA<2.5){
		return "C";
	}
	else
		return "D";
}

void Student::Print_Std_Info(){
	cout<<"Student name: "<<firstname<<" "<<lastname<<endl;
	cout<<"Student ID: "<<ID<<endl;
	cout<<"Date of birth is: "<<dateofbirth<<endl;
	cout<<"GPA to the date: "<<GPA<<endl;
	cout<<"Start year is: "<<startYear<<endl;
	cout<<"Completed credit: "<<completedCredit<<endl;
	cout<<"Program: "<<program<<endl;

	bool check=CompleteProgram();

	if(check){
		cout<<"Student has completed "<<completedCredit<<" credits and "<<program<< " program."<<endl;
	}
	else
		cout<<"Student hasn't completed "<<program<<" program"<<endl;

	cout<<"Student status is: "<<StudentStatus()<<endl;
}


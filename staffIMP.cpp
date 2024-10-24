#include <iostream>
#include<string>
#include"staff.h"
using namespace std;





Staff::Staff(){

}

string Staff::getFirstname(){
	return firstname;
}
void Staff::setFirstname(string a){
	firstname=a;
}

string Staff::getLastname(){
	return lastname;
}
void Staff::setLastname(string a){
	lastname=a;
}

string Staff::getDateofhiring(){
	return dateofhiring;
}
void Staff::setDateofhiring(string a){
	dateofhiring=a;
}

int Staff::getID(){
	return ID;
}
void Staff::setID(int a){
	ID=a;
}

string Staff::getBonuscode(){
	return bonusCode;
}
void Staff::setBonuscode(string a){
	bonusCode=a;
}

double Staff::getCurrentsalary(){
	return currentSalary;
}
void Staff::setCurrentsalary(double a){
	currentSalary=a;
}

void Staff::Print_stf_Info(){
	cout<<"Employee's name: "<<firstname<<" "<<lastname<<endl;
	cout<<"Employee's ID: "<<ID<<endl;
	cout<<"Date of hiring: "<<dateofhiring<<endl;
	cout<<"Bonus Code: "<<bonusCode<<endl;
	cout<<"Current salary: "<<currentSalary<<endl;
	Calculate_Salary();
}

void Staff::Calculate_Salary(){
	if(bonusCode=="A"){
		cout<<"New salary will be: "<<currentSalary*1.08<<endl;
	}
	else if(bonusCode=="B"){
			cout<<"New salary will be: "<<currentSalary*1.06<<endl;
		}
	else if(bonusCode=="C"){
			cout<<"New salary will be: "<<currentSalary*1.03<<endl;
		}
	else if(bonusCode=="D"){
			cout<<"New salary will be: "<<currentSalary*1.01<<endl;
		}
	else
		cout<<"New salary will be: "<<currentSalary<<endl;
}

#include <iostream>
#include<string>
#include<fstream>

#include"Student_staff.h"
using namespace std;
Student_staff::Student_staff(){
	int numberofline;

	ifstream studentFile;
	studentFile.open("student.txt");
	//exception handling
	try{
	if(!studentFile){
		cout<<"File could not be opened. program end"<<endl;
		exit(0);
	}

	else{
		studentFile>>numberofline;//decide the size of array
		studentArraySize=numberofline;

		studentPtr=new Student[numberofline];//create dynamic array
		//cout<<"There are "<<numberofline<<" students "<<endl;
		string firstname, lastname, dateofbirth, program;
			int ID,startYear;
			double GPA, Credit;
			//read the file
		for(int i=0;i<numberofline;i++){
		studentFile>>firstname>>lastname>>ID>>dateofbirth>>GPA>>startYear>>Credit>>program;


		//store data into array

		studentPtr[i].setFirstname(firstname);
		studentPtr[i].setLastname(lastname);
		studentPtr[i].setID(ID);
		studentPtr[i].setDateofbirth(dateofbirth);
		studentPtr[i].setGPA(GPA);
		studentPtr[i].setStartyear(startYear);
		studentPtr[i].setCompletedCredit(Credit);
		studentPtr[i].setProgram(program);

		}
	}

		studentFile.close();

		ifstream staffFile;
		staffFile.open("staff.txt");

		if(!staffFile){
				cout<<"File could not be opened. program end"<<endl;
				exit(0);
			}
		else{
		string first,last,dateofhiring,bonusCode;
			int staffID;
			double currentSalary;

			staffFile>>numberofline;
			staffnumber=numberofline;
			staffPtr=new Staff[numberofline];//create dynaimic array of staff

			//read the file
			for(int i=0;i<numberofline;i++){
					staffFile>>first>>last>>staffID>>dateofhiring>>bonusCode>>currentSalary;


					staffPtr[i].setFirstname(first);
					staffPtr[i].setLastname(last);
					staffPtr[i].setID(staffID);
					staffPtr[i].setDateofhiring(dateofhiring);


					staffPtr[i].setBonuscode(bonusCode);
					staffPtr[i].setCurrentsalary(currentSalary);

					}
			cout<<"*******************"<<endl;
			/*for(int i=0;i<numberofline;i++){
					staffPtr[i].Print_stf_Info();
					}*/
		}
			staffFile.close();
	}
	//exception handling
	catch(...){
		cout<<"Exception happened. Please check the file exist or not."<<endl;
	}

}

Student* Student_staff::getstudentPtr(){
	return studentPtr;
}
int Student_staff::getstudentSize(){
	return studentArraySize;
}
void Student_staff::Highest_GPA(Student* ptr,int size){

	double max=ptr[0].getGPA();
	int index=0;
	for(int i=1; i<size;i++){
		if(ptr[i].getGPA()>max){
			max=ptr[i].getGPA();
			index=i;
		}
	}
	cout<<"The information of student who has highest GPA"<<endl;
	ptr[index].Print_Std_Info();




}
int Student_staff::N_of_UnderGrad(Student* ptr, int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(ptr[i].getProgram()=="bachelor"){
			count++;
		}
	}

	return count;

}
void Student_staff::Same_Hire_Year(Staff* ptr,int size,string hiringYear){
		for(int i=0;i<size;i++){
			if(ptr[i].getDateofhiring()==hiringYear){
				cout<<"Employee name: "<<ptr[i].getFirstname()<<" "<<ptr[i].getLastname()<<" are hired in "<<hiringYear<<endl;
			}
		}






}
Staff* Student_staff::getstaffPtr(){
	return staffPtr;
}
int Student_staff::getstaffSize(){
	return staffnumber;
}

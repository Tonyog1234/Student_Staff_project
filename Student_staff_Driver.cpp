//============================================================================
// Name        : Project243.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Student_staff.h"
#include<fstream>
int main() {
	Student_staff x;

		Student* DriverptrStudent=x.getstudentPtr();//pointer which points to array of student
		Staff* DriverPtrStaff= x.getstaffPtr();//pointer which points to array of staff

		//test Student_staff member function
		cout<<"Testing Student_staff Class member functions: "<<endl;
		x.Highest_GPA(x.getstudentPtr(),x.getstudentSize());
		cout<<endl;

		cout<<"Number of undergraduate students is: "<<x.N_of_UnderGrad(x.getstudentPtr(),x.getstudentSize())<<endl;
		cout<<"Employee who are hired in 2019"<<endl;
		x.Same_Hire_Year(x.getstaffPtr(),x.getstaffSize(),"2019");
		cout<<endl;

		//test Student member function
		cout<<"******************"<<endl;
		cout<<"Testing Student class member function: "<<endl;
		int order=1;
		for(int i=0;i<x.getstudentSize();i++){
			cout<<"Student "<<order<<endl;
		DriverptrStudent[i].Print_Std_Info();
		order++;
		cout<<"********************"<<endl;
		}

		//test staff member function
		cout<<"Testing Staff Class member functions: "<<endl;
		order=1;
		for(int i =0 ; i <x.getstaffSize();i++){
			cout<<"Staff "<<order<<endl;
			DriverPtrStaff[i].Print_stf_Info();
			cout<<"**********************"<<endl;
			order++;
		}
	/*ofstream outFile;
		outFile.open("student.txt");

		if(!outFile){
			cout<<"File could not be opened"<<endl;
		}

		else{
			int number;
			string firstname, lastname, dateofbirth, program;
				int ID,startYear;
				double GPA, completedCredit;
				cout<<"Enter number of student: ";
									cin>>number;
									outFile<<number<<endl;
				for(int i=0;i<5;i++){

			cout<<"Enter your first name: ";
			cin>>firstname;

			cout<<"Enter your last name: ";
			cin>>lastname;

			cout<<"Enter your ID: ";
			cin>>ID;

			cout<<"Enter your date of birth: ";
			cin>>dateofbirth;

			cout<<"Enter your GPA: ";
			cin>>GPA;

			cout<<"Enter your start year: ";
			cin>>startYear;

			cout<<"Enter your completed credit: ";
			cin>>completedCredit;

			cout<<"Enter your program: ";
			cin>>program;

			outFile<<firstname<<" "<<lastname<<" "<<ID<<" "<<dateofbirth<<" "<<GPA<<" "<<startYear<<" "<<completedCredit<<" "<<program<<endl;
			cout<<"************************"<<endl;
			}
			outFile.close();
		}*/

		/*ofstream staffFile;
		staffFile.open("staff.txt");
		if(!staffFile){
					cout<<"File could not be opened"<<endl;
				}

		else{
			int number;
			string firstname,lastname,dateofhiring,bonusCode;
				int ID;
				double currentSalary;
				cout<<"Enter number of employee: ";
				cin>>number;
				staffFile<<number<<endl;
				for(int i =0; i<5;i++){

					cout<<"Enter your first name: ";
					cin>>firstname;

					cout<<"Enter your last name: ";
					cin>>lastname;

					cout<<"Enter your ID: ";
					cin>>ID;

					cout<<"Enter your year of hiring: ";
					cin>>dateofhiring;

					cout<<"Enter your bonus code: ";
					cin>>bonusCode;

					cout<<"Enter your current salary: ";
					cin>>currentSalary;


					staffFile<<firstname<<" "<<lastname<<" "<<ID<<" "<<dateofhiring<<" "<<bonusCode<<" "<<currentSalary<<" "<<endl;
					cout<<"************************"<<endl;
				}
				staffFile.close();
			}*/
	/*Student_staff x;

	Student* DriverptrStudent=x.getstudentPtr();
	Staff* DriverPtrStaff= x.getstaffPtr();

	cout<<"Testing Student_staff Class member functions: "<<endl;
	x.Highest_GPA(x.getstudentPtr(),x.getstudentSize());
	cout<<endl;

	cout<<"Number of undergraduate students is: "<<x.N_of_UnderGrad(x.getstudentPtr(),x.getstudentSize())<<endl;
	cout<<"Employee who are hired in 2019"<<endl;
	x.Same_Hire_Year(x.getstaffPtr(),x.getstaffSize(),"2019");
	cout<<endl;

	cout<<"******************"<<endl;
	cout<<"Testing Student class member function: "<<endl;
	int order=1;
	for(int i=0;i<x.getstudentSize();i++){
		cout<<"Student "<<order<<endl;
	DriverptrStudent[i].Print_Std_Info();
	order++;
	cout<<"********************"<<endl;
	}

	cout<<"Testing Staff Class member functions: "<<endl;
	order=1;
	for(int i =0 ; i <x.getstaffSize();i++){
		cout<<"Staff "<<order<<endl;
		DriverPtrStaff[i].Print_stf_Info();
		cout<<"**********************"<<endl;
		order++;
	}*/

	return 0;
}

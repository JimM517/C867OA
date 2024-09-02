#include "student.h"
#include <string>
#include <iostream>
using namespace std;


// constructors
Student::Student() {
	this->student_id = 0;
	this->first_name = "";
	this->last_name = "";
	this->email_address = "";
	this->age = 0;
	for (int i = 0; i < 3; i++) {
		this->days_to_complete_course[i] = 0;
	};
	this->degree_program;
};

Student::Student(int studentId, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram) {
	this->student_id = studentId;
	this->first_name = firstName;
	this->last_name = lastName;
	this->email_address = emailAddress;
	this->age = age;
	for (int i = 0; i < 3; i++) {
		this->days_to_complete_course[i] = daysToComplete[i];
	};
	this->degree_program = degreeProgram;
};

// deconstructor
Student::~Student() {};

// defining getters
int Student::Get_student_id() {
	return student_id;
};

std::string Student::Get_first_name() {
	return first_name;
};

std::string Student::Get_last_name() {
	return last_name;
};

std::string Student::Get_email_address() {
	return email_address;
};

int Student::Get_age() {
	return age;
};

int* Student::Get_days_to_complete() {
	return days_to_complete_course;
};

DegreeProgram Student::Get_degree_program() {
	return degree_program;
};


// setters
void Student::Set_student_id(int studentId) {
	this->student_id = studentId;
};

void Student::Set_first_name(std::string firstName) {
	this->first_name = firstName;
};

void Student::Set_last_name(std::string lastName) {
	this->last_name = lastName;
};

void Student::Set_email_address(std::string emailAddress) {
	this->email_address = emailAddress;
};

void Student::Set_days_to_complete(int daysToComplete[]) {
	for (int i = 0; i < 3; i++) {
		this->days_to_complete_course[i] = daysToComplete[i];
	};
};

void Student::Set_degree_program(DegreeProgram degreeProgram) {
	this->degree_program = degreeProgram;
}

void Student::print() {

	std::cout << "Student Id: " << Get_student_id() << "\t"
		<< "First Name: " << Get_first_name() << "\t"
		<< "Last Name: " << Get_last_name() << "\t"
		<< "Email address: " << Get_email_address() << "\t"
		<< "Age: " << Get_age() << "\t"
		<< "Days to complete course: ";
	for (int i = 0; i < 3; i++) {
	std:cout << days_to_complete_course[i] << " ";
	}
	std::cout << "\t";
	std::cout << "Degree Program: ";
	switch (Get_degree_program()) {
		case DegreeProgram::SECURITY:
			std::cout << "Security";
			break;
		case DegreeProgram::NETWORK:
			std::cout << "Network";
			break;
		case DegreeProgram::SOFTWARE:
			std::cout << "Software";
			break;
	}
	std::cout << std::endl;

};



//2.  Create each of the following functions in the Student class :
//	a.an accessor(i.e., getter) for each instance variable from part D1
//	b.a mutator(i.e., setter) for each instance variable from part D1
//	c.All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//	d.constructor using all of the input parameters provided in the table
//	e.print() to print specific student data
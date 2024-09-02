#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "degree.h"
#pragma once


class Student {
public:

	// constructor
	Student();
	Student(int studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram);
	~Student();

	// getters
	int Get_student_id();
	std::string Get_first_name();
	std::string Get_last_name();
	std::string Get_email_address();
	int Get_age();
	int* Get_days_to_complete();
	DegreeProgram Get_degree_program();

	// setters
	void Set_student_id(int studentId);
	void Set_first_name(std::string firstName);
	void Set_last_name(std::string lastName);
	void Set_email_address(std::string emailAddress);
	void Set_days_to_complete(int daysToComplete[]);
	void Set_degree_program(DegreeProgram degreeProgram);
	void print();


private:
	int student_id;
	std::string first_name;
	std::string last_name;
	std::string email_address;
	int age;
	int days_to_complete_course[3];
	DegreeProgram degree_program;
};





#endif // STUDENT_H














//D.For the Student class, do the following :
//1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables :
//•  student ID
//•  first name
//•  last name
//•  email address
//•  age
//•  array of number of days to complete each course
//•  degree program
// 
//2.  Create each of the following functions in the Student class :
//	a.an accessor(i.e., getter) for each instance variable from part D1
//	b.a mutator(i.e., setter) for each instance variable from part D1
//	c.All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//	d.constructor using all of the input parameters provided in the table
//	e.print() to print specific student data

#ifndef ROSTER_H
#define ROSTER_H
#pragma once
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;

class Roster {
public:

	// methods
	Student* classRosterArray[5];
	void Add(std::string studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void Remove(std::string studentId);
	void PrintAll();
	void PrintAverageDaysInCourse(std::string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgam(DegreeProgram degreeProgram);

	// default constructor
	Roster();

	// deconstructor
	~Roster();

private:
	int index = 0;


	


};















#endif // !ROSTER_H



// E.Create a Roster class (roster.cpp) by doing the following :
// 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
// 2.  Create a student object for each student in the data table and populate classRosterArray.
	//a.Parse each set of data identified in the “studentData Table.”
	//b.Add each student object to classRosterArray.

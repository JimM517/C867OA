#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include <sstream>
using namespace std;


int main() {

	std::cout << "C867 Scripting and Programming Applications" << std::endl;
	std::cout << "Language used: C++" << std::endl;
	std::cout << "Student Id: 011573637" << std::endl;
	std:cout << "James Magee" << std::endl;

	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jim,Magee,Jmage59@wgu.edu,34, 20, 40, 22,SOFTWARE"

	};


	Roster classRoster;

	// parsing student data and adding to array
	for (int i = 0; i < 5; i++) {
		
		std::string studentId, firstName, lastName, emailAddress, degreeProgram;
		int age, d1, d2, d3;

		std::istringstream inSS(studentData[i]);


		std::getline(inSS, studentId, ',');
		std::getline(inSS, firstName, ',');
		std::getline(inSS, lastName, ',');
		std::getline(inSS, emailAddress);

		inSS >> age;
		inSS.ignore();
		inSS >> d1;
		inSS.ignore();
		inSS >> d2;
		inSS.ignore();
		inSS >> d3;
		inSS.ignore();

		std::getline(inSS, degreeProgram, ',');


		DegreeProgram d_program{};

		if (degreeProgram == "SECURITY") {
			d_program = DegreeProgram::SECURITY;
		}
		else if (degreeProgram == "NETWORK") {
			d_program = DegreeProgram::NETWORK;
		}
		else if (degreeProgram == "SOFTWARE") {
			d_program = DegreeProgram::SOFTWARE;
		}

		classRoster.Add(studentId, firstName, lastName, emailAddress, age, d1, d2, d3, d_program);


	}

	

	

	// print all functionality
	classRoster.PrintAll();
	std::cout << std::endl;


	// print invalid emails
	classRoster.PrintInvalidEmails();
	std::cout << std::endl;




	// getting average days
	for (int i = 0; i < 5; i++) {
		classRoster.PrintAverageDaysInCourse(classRoster.classRosterArray[i]->Get_student_id());
		std::cout << "\t";
	}
	std::cout << std::endl;

	// print by degree
	classRoster.PrintByDegreeProgam(DegreeProgram::SOFTWARE);
	std::cout << std::endl;


	// remove
	classRoster.Remove("A3");
	std::cout << std::endl;
	

	// print again
	classRoster.PrintAll();
	std::cout << std::endl;
	
	// remove A3 again
	classRoster.Remove("A3");
	std::cout << std::endl;


	return 0;
}













//F.Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results :

//	1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
//	2.  Create an instance of the Roster class called classRoster.
//	3.  Add each student to classRoster.
//	4.  Convert the following pseudo code to complete the rest of the  main() function :
//	classRoster.printAll();
//	classRoster.printInvalidEmails();
//	loop through classRosterArray and for each element:
//	classRoster.printAverageDaysInCourse(/*current_object's student id*/);
//	Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
//	classRoster.printByDegreeProgram(SOFTWARE);
//	classRoster.remove("A3");
//	classRoster.printAll();
//	classRoster.remove("A3");
//	expected: the above line should print a message saying such a student with this ID was not found.
//	5.  Implement the destructor to release the memory that was allocated dynamically in Roster.


//G.Demonstrate professional communication in the content and presentation of your submission.
#include "degree.h"
#include "student.h"
#include "roster.h"
#include <string>
#include <iostream>
using namespace std;





// add method
void Roster::Add(std::string studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	
	int daysToComplete[] = { daysInCourse1, daysInCourse2, daysInCourse3 };


	classRosterArray[index++] = new Student(studentId, firstName, lastName, emailAddress, age, daysToComplete, degreeProgram);

}


// remove method
void Roster::Remove(std::string studentId) {

	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->Student::Get_student_id() == studentId) {
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			break;
		}

		std::cout << "The provided student id does not match any records. Please try again";
	
	}
	


}




// print
void Roster::PrintAll() {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->Student::print();
		}
	}
}



// get average days
void Roster::PrintAverageDaysInCourse(std::string studentId) {

	double average_days = 0.0;

	// get days for student
	for (int i = 0; i < 3; i++) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->Student::Get_student_id() == studentId) {
			int* numDays = classRosterArray[i]->Get_days_to_complete();
			average_days = (numDays[0] + numDays[1] + numDays[2]) / 3.0;
		}

	}
	std::cout << "Average days in courses: " << average_days;

}


// print invalid emails
void Roster::PrintInvalidEmails() {

	for (int i = 0; i < 5; i++) {

		std::string email = classRosterArray[i]->Student::Get_email_address();

		if (email.find("a") == std::string::npos || email.find(".") == std::string::npos || email.find(" ") != std::string::npos) {
			cout << "Email invalid. Ensure provided email contains @, ., and no spaces";
		}



	}


}


// printing by degree program
void Roster::PrintByDegreeProgam(DegreeProgram degreeProgram) {

	for (int i = 0; i < 5; i++) {
		
		if (classRosterArray[i]->Student::Get_degree_program() == degreeProgram) {
			classRosterArray[i]->Student::print();
		}

	}




}


Roster::Roster() {};

Roster::~Roster() {};






// 3.
//		Define the following functions :
//		a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)  that sets the instance variables from part D1 and updates the roster.
//		b.  public void remove(string studentID)  that removes students from the roster by student ID.If the student ID does not exist, the function prints an error message indicating that the student was not found.
//		c. public void printAll() that prints a complete tab - separated list of student data in the provided format : A1[tab] First Name : John[tab] Last Name : Smith[tab] Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : Security.The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//		d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a studentís average number of days in the three courses.The student is identified by the studentID parameter
//		e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
//		Note : A valid email should include an at sign('@') and period('.') and should not include a space(' ').
//		f.	  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.
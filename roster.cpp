#include <iostream>
#include "roster.h"

// Constructor
Roster::Roster() {
    lastIndex = -1;
}

// Destructor
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; ++i) {
        delete classRosterArray[i];
    }
}

// Add student method
void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysInCourse[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
    if (lastIndex < ROSTER_MAX_SIZE - 1) {
        lastIndex++;
        classRosterArray[lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
    }
}

// Remove student method
void Roster::remove(std::string studentID) {
    bool found = false;
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            found = true;
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            lastIndex--;
        }
    }
    if (!found) {
        std::cout << "Student with ID " << studentID << " not found." << std::endl;
    }
}

// Print all students method
void Roster::printAll() const {
    for (int i = 0; i <= lastIndex; ++i) {
        classRosterArray[i]->print();
        std::cout << std::endl;
    }
}

// Print invalid email addresses method
void Roster::printInvalidEmails() const {
    for (int i = 0; i <= lastIndex; ++i) {
        std::string email = classRosterArray[i]->getEmailAddress();
        if (email.find('@') == std::string::npos || email.find('.') == std::string::npos || email.find(' ') != std::string::npos) {
            std::cout << "Invalid email: " << email << std::endl;
        }
    }
}

// Print average days in course for a given student ID
void Roster::printAverageDaysInCourse(std::string studentID) const {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            const int* daysInCourse = classRosterArray[i]->getDaysInCourse();
            int sum = daysInCourse[0] + daysInCourse[1] + daysInCourse[2];
            std::cout << "Average days in course for student " << studentID << ": " << sum / 3 << std::endl;
            return;
        }
    }
    std::cout << "Student with ID " << studentID << " not found." << std::endl;
}

// Print students by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

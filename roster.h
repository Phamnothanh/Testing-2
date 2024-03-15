#pragma once
#include <string>
#include "student.h"

class Roster {
public:
    // Constructor
    Roster();

    // Destructor
    ~Roster();

    // Add student method
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    // Remove student method
    void remove(std::string studentID);

    // Print all students method
    void printAll() const;

    // Print invalid email addresses method
    void printInvalidEmails() const;

    // Print average days in course for a given student ID
    void printAverageDaysInCourse(std::string studentID) const;

    // Print students by degree program
    void printByDegreeProgram(DegreeProgram degreeProgram) const;

private:
    static const int ROSTER_MAX_SIZE = 5;
    int lastIndex;
    Student* classRosterArray[ROSTER_MAX_SIZE];
};

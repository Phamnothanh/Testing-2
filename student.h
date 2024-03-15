#pragma once
#include <iostream>
#include <string>
#include "degree.h"

class Student {
public:
    // Constructors
    Student();
    Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram);

    // Accessors
    std::string getStudentID() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmailAddress() const;
    int getAge() const;
    const int* getDaysInCourse() const;
    DegreeProgram getDegreeProgram() const;

    // Mutators
    void setStudentID(std::string studentID);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmailAddress(std::string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // Print method
    void print() const;

private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
};

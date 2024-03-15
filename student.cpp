#include "student.h"

// Constructors
Student::Student() {}

Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
}

// Accessors
std::string Student::getStudentID() const { return studentID; }
std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
std::string Student::getEmailAddress() const { return emailAddress; }
int Student::getAge() const { return age; }
const int* Student::getDaysInCourse() const { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

// Mutators
void Student::setStudentID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(std::string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

// Print method
void Student::print() const {
    std::cout << getStudentID() << "\t";
    std::cout << "First Name: " << getFirstName() << "\t";
    std::cout << "Last Name: " << getLastName() << "\t";
    std::cout << "\t" << "Age: " << getAge() << "\t";
    std::cout << "\t" << "Days In Course: {" << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "}\t";
    std::cout << "\t" << "Degree Program: " << degreeProgramStrings[degreeProgram];
    std::cout << std::endl;
}

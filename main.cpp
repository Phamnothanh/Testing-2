#include <iostream>
#include "roster.h"

int main() {
    Roster classRoster;

    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORKING);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Thanh", "Pham", "cpham39@wgu.edu", 28, 30, 30, 30, SOFTWARE);

    std::cout << "All Students:" << std::endl;
    classRoster.printAll();
    std::cout << std::endl;

    std::cout << "Invalid Email Addresses:" << std::endl;
    classRoster.printInvalidEmails();
    std::cout << std::endl;

    std::cout << "Average Days in Course:" << std::endl;
    for (int i = 0; i <= 4; ++i) {
        classRoster.printAverageDaysInCourse("A" + std::to_string(i + 1));
    }
    std::cout << std::endl;

    std::cout << "Students in the Software degree program:" << std::endl;
    classRoster.printByDegreeProgram(SOFTWARE);

    classRoster.remove("A3");

    return 0;
}

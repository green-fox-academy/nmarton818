#include "student.h"

Student::Student() : Person(), _previousOrganization("The School of Life"), _skippedDays(0) {};
Student::Student(std::string name, int age, Gender gender, std::string previousOrganization):
                    Person(name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0) {};

std::string Student::getPreviousOrganization() const {
    return _previousOrganization;
}

int Student::getSkippedDays() const {
    return _skippedDays;
}

void Student::introduce() {
    //"Hi, I'm name, a age year old gender from previousOrganization who skipped skippedDays days from the course already."
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGender() << " from " << getPreviousOrganization();
    std::cout << " who skipped " << getSkippedDays() << " days from the course already." << std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int skipDay) {
    _skippedDays+=skipDay;
}


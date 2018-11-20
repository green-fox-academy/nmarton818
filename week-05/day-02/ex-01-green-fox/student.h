#include "person.h"
#include <iostream>
#ifndef EX_01_GREEN_FOX_STUDENT_H
#define EX_01_GREEN_FOX_STUDENT_H

class Student : public Person {
private:
    std::string _previousOrganization;
    int _skippedDays;
public:
    Student();
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    std::string getPreviousOrganization() const;
    int getSkippedDays() const;
    void getGoal() override;
    void introduce() override;
    void skipDays(int skipDay);
};

#endif //EX_01_GREEN_FOX_STUDENT_H

#ifndef EX_01_GREEN_FOX_COHORT_H
#define EX_01_GREEN_FOX_COHORT_H

#include "mentor.h"
#include "student.h"
#include <iostream>
#include <vector>


class Cohort {
private:
    std::string _name;
    std::vector<Student> _students;
    std::vector<Mentor> _mentors;
public:
    Cohort(std::string name);
    void addStudent(Student*);
    void addMentor(Mentor*);
    std::string getName();
    void info();
};


#endif //EX_01_GREEN_FOX_COHORT_H

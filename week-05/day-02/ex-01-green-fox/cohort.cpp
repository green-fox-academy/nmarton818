#include "cohort.h"
#include "mentor.h"
#include<iostream>

Cohort::Cohort(std::string name) : _name(name) {}

void Cohort::addStudent(Student* newStudent) {
    _students.push_back(*newStudent);
}

void Cohort::addMentor(Mentor *newMentor) {
    _mentors.push_back(*newMentor);
}

std::string Cohort::getName(){
    return _name;
}

void Cohort::info() {
    std::cout << "The " << getName() << " cohort has " << _students.size() << " students and " << _mentors.size() << " mentors." << std::endl;
}
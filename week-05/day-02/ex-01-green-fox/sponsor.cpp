
#include "sponsor.h"

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &_company) : Person(name, age, gender),
                                                                    _company(_company), _hiredStudents(0) {};

Sponsor::Sponsor() : Person(), _company("Google"), _hiredStudents(0) {}

const std::string &Sponsor::getCompany() const {
    return _company;
}

int Sponsor::getHiredStudents() const {
    return _hiredStudents;
};

void Sponsor::hire() {
    _hiredStudents++;
}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGender() << " who represents " << getCompany();
    std::cout << " and hired " << getHiredStudents() << " students so far." << std::endl;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}
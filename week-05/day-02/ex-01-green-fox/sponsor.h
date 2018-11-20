#ifndef EX_01_GREEN_FOX_SPONSOR_H
#define EX_01_GREEN_FOX_SPONSOR_H


#include <string>
#include "person.h"

class Sponsor : public Person {
private:
    std::string _company;
    int _hiredStudents;
public:
    Sponsor();
    Sponsor(const std::string &name, int age, Gender gender, const std::string &_company);

    const std::string &getCompany() const;
    int getHiredStudents() const;

    void introduce() override;
    void getGoal() override;
    void hire();

};


#endif //EX_01_GREEN_FOX_SPONSOR_H

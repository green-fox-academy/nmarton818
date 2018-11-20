#include <iostream>
#ifndef EX_01_GREEN_FOX_PERSON_H
#define EX_01_GREEN_FOX_PERSON_H

enum class Gender{
    FEMALE,
    MALE
};

class Person {
protected:
    std::string _name;
    int _age;
    Gender _gender;
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual void getGoal();
    std::string getName() const;
    std::string getGender() const;
    int getAge() const;
};


#endif //EX_01_GREEN_FOX_PERSON_H

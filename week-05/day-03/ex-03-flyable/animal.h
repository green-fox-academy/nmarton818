#ifndef EX_03_FLYABLE_ANIMAL_H
#define EX_03_FLYABLE_ANIMAL_H

#include <iostream>

enum class Gender{
    FEMALE,
    MALE
};

class Animal {
protected:
    Gender _gender;
    std::string _name;
    int _age;

public:
    Animal(Gender gender, std::string name, int age);
    virtual void sleep() const = 0;
};


#endif //EX_03_FLYABLE_ANIMAL_H

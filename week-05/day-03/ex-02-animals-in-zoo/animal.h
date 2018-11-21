#ifndef EX_02_ANIMALS_IN_ZOO_ANIMAL_H
#define EX_02_ANIMALS_IN_ZOO_ANIMAL_H
#include <string>


enum class Gender{
    FEMALE,
    MALE
};

enum class Diet{
    OMNIVORE,
    CARNIVORE,
    HERBIVORE
};

class Animal {
protected:
    Diet _diet;
    Gender _gender;
    std::string _name;
    std::string _nickName;

public:
    Animal(Diet diet, Gender gender, std::string name, std::string nickName);
    virtual std::string getName() const = 0;
    virtual void breed() const = 0;
    virtual void noise() const = 0;

};


#endif //EX_02_ANIMALS_IN_ZOO_ANIMAL_H

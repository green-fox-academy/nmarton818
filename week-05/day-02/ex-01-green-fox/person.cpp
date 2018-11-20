#include "person.h"

Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender){}
Person::Person() : _name("Jane Doe"), _age(30), _gender(Gender::FEMALE){}

std::string Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

std::string Person::getGender() const {
  switch (_gender){
      case Gender::MALE : return "male";
      case Gender::FEMALE : return "female";
      default:
          return "other";
  }
}

void Person::introduce() {
    std::cout << "Hi, I'm " << getName() << " a " << getAge() << "year old " << getGender() << ". " << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}


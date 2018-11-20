#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender), _level(level) {};
Mentor::Mentor() : Person(), _level(Level::INTERMEDIATE) {};

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGender() << ' ' << getLevel();
    std::cout << " level mentor." << std::endl;
}

std::string Mentor::getLevel() {
    switch (_level){
        case Level::JUNIOR : return "junior";
        case Level::INTERMEDIATE : return "intermediate";
        case Level::SENIOR : return "senior";
    }
}



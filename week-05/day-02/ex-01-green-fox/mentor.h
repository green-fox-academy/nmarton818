
#ifndef EX_01_GREEN_FOX_MENTOR_H
#define EX_01_GREEN_FOX_MENTOR_H
#include <iostream>
#include "person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor: public Person {
private:
    Level _level;
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);
    std::string getLevel();
    void introduce();
    void getGoal();

};


#endif //EX_01_GREEN_FOX_MENTOR_H

#ifndef VILLAIN_H
#define VILLAIN_H
#include "Person.h"
#include <string>

class Villain:public Person {
public:
    Villain();

    Villain(std::string first, std::string last, int day, int month, int year, std::string plan);       //initaializes evil plan

    void setEvilPlan(const std::string& plan);      //mutator to set evil plan

    std::string getEvilPlan()const;     //accessor to evil plan
private:
    std::string EvilPlan; //data member for evil plan
};
#endif //VILLAIN_H

#include "Villain.h"

Villain::Villain():Person(), EvilPlan(""){}     //d.c. to initialize person and evil plan
                                                                                                                         //parameter constructor
Villain::Villain(std::string first, std::string last, int day, int month, int year, std::string plan):Person(first, last, day, month, year), EvilPlan(plan){}

void Villain::setEvilPlan(const std::string &plan) {        //set the evil plan for villain
    EvilPlan=plan;
}
std::string Villain::getEvilPlan() const {      //returns villians evil plans
    return EvilPlan;
}


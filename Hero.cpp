#include "Hero.h"

Hero::Hero():Person(), Powerlvl(0){}            //default constructor
                                                    //initializes person and Power level
Hero::Hero(std::string first, std::string last, int day, int month, int year, int power):Person(first, last, day, month, year), Powerlvl(power){}

void Hero::setPowerlvl(int power) {         //sets heros power level
    Powerlvl=power;
}
int Hero::getPowerlvl() const {             //prints power level
    return Powerlvl;
}



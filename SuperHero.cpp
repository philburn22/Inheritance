#include "SuperHero.h"

SuperHero::SuperHero():Hero(),secretId(""){}        //d.c. for initializing base class and secretId

SuperHero::SuperHero(std::string first, std::string last, int day, int month, int year, int power, std::string alias):Hero(first, last, day, month, year, power), secretId(alias){} //initializing person details, heros power, and secretId

void SuperHero::setAlias(const std::string &newAlias) {     //sets secretId for SuperHero
    secretId=newAlias;
}
std::string SuperHero::getAlias() const {       //returns secretId of SuperHero
    return secretId;
}


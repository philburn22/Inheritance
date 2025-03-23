#ifndef SUPERHERO_H
#define SUPERHERO_H
#include "Hero.h"
#include <string>

class SuperHero:public Hero {
public:
    SuperHero();         //default constructor
    SuperHero(std::string first, std::string last, int day, int month, int year, int power, std::string alias);
    void setAlias(const std::string& newAlias);         //mutator to set the secret identity
    std::string getAlias()const;        //accessor that gets secret identity
private:
    std::string secretId;           //data member
};
#endif //SUPERHERO_H

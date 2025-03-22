#ifndef HERO_H
#define HERO_H
#include "Person.h"
#include <string>

class Hero:public Person {
public:
    Hero();
    Hero(std::string first, std::string last, int day, int month, int year, int power);
    void setPowerlvl(int power);
    int getPowerlvl()const;
private:
    int Powerlvl;
};
#endif //HERO_H

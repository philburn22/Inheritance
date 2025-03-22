/*************************************************************************
** Author                : Nathan Philburn
** Program               : hw3, q1
** Date Created          : March 20, 2025
** Date Last Modified    : March 22, 2025
** Usage                 : No command line arguments
**
** Problem:
** Extend the Person class using multi-level inheritance. Create the following:
** - Hero (child of Person) with an additional data member,
** - SuperHero (child of Hero/Grandchild) with an additional data member,
** - Villain (child of Person) with an additional data member.
**
** Update main() to demonstrate both the inherited functions (like getName and
** getBirthdate) and the new class-specific functions (accessors and mutators for
** the new data members).
*************************************************************************/
#include <iostream>
#include "Person.h"
#include "Hero.h"
using namespace std;

int main()
{
    Person person("Tony", "Stark", 1, 21, 1950);        //person object
    cout << person.getName() << " born on: " << person.getBirthdate() << endl;

    Hero hero("Bruce", "Wayne", 21, 3, 1965, 88);       //hero object with power level
    cout<<"Hero: "<<hero.getName()<<", Birthdate: "<<hero.getBirthdate()<<", Power level: "<<hero.getPowerlvl()<<endl;
    return 0;
}

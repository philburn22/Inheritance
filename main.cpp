/*************************************************************************
** Author                : Nathan Philburn
** Program               : hw3, q1
** Date Created          : March 20, 2025
** Date Last Modified    : March 23, 2025
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
#include "SuperHero.h"
#include"Villain.h"
using namespace std;

int main()
{
    Person person("Tony", "Stark", 21, 1, 1950);        //person object
    cout << person.getName() << " born on: " << person.getBirthdate() << endl;

    Hero hero("Bruce", "Wayne", 21, 3, 1965, 88);       //hero object with power level
    cout<<"Hero: "<<hero.getName()<<", born on: "<<hero.getBirthdate()<<", Power level: "<<hero.getPowerlvl()<<endl;

    SuperHero superHero("Clark", "Kent", 29,7, 1973, 98, "Superman");       //creates a SuperHero object and prints its outputs
    cout<<"Superhero: "<<superHero.getName()<<", born on: "<<superHero.getBirthdate()<<", Power level: "<<superHero.getPowerlvl()<<", Secret identity: "<<superHero.getAlias()<<endl;

    Villain villain("Lex", "Luthor", 14, 2, 1963, "World domination");              //creates the villain objects and prints its outputs
    cout<<"Villain: "<<villain.getName()<<", born on:"<<villain.getBirthdate()<<", Evil plan: "<<villain.getEvilPlan()<<endl;
    return 0;
}

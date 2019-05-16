//
// Created by user on 11/05/19.
//

#ifndef OOP_MAJORPRACTICAL_ANIMAL_H
#define OOP_MAJORPRACTICAL_ANIMAL_H
#include <iostream>


class Animal {
protected:
    std::string name;
    std::string description;
public:
    Animal(std::string aName, std::string aDescription);
    std::string getName();
    void interact();
};


#endif //OOP_MAJORPRACTICAL_ANIMAL_H

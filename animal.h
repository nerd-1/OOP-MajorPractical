#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
class animal
{
protected:
    std::string description;
    bool feed = false;
    bool pet = false;

public:
    animal();
    std::string getDescription();
    bool feedAnimal();
    bool petAnimal();
    ~animal() {};
};
#endif


#ifndef LION_H
#define LION_H
#include "animal.h"
class lion: public animal
{
public:
    std::string getDescription();
};
#endif


#ifndef MACAW_H
#define MACAW_H
#include "animal.h"
class macaw: public animal
{
public:
	std::string getDescription();
    bool feedAnimal();
};
#endif

#ifndef STINGRAY_H
#define STINGRAY_H
#include "animal.h"
class stingray: public animal
{
public:
    std::string getDescription();
};
#endif

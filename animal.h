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
	bool feed();
	bool pet();
	~animal();
};



#ifndef LION_H
#define LION_H
class lion: public tour
{
public:
	std::string getDescription();
};

#endif

#ifndef MACAW_H
#define MACAW_H
class macaw: public tour
{
public:
	std::string getDescription();
};

#endif

#ifndef STINGRAY_H
#define STINGARY_H
class stingray: public tour
{
public:
	std::string getDescription();
};

#endif
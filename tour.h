#ifndef TOUR_H
#define TOUR_H
#include <iostream>

class tour
{
protected:
    int price = 50;
    int ticket = 20;

public:
	tour();
	std::string getDescription() {};  //TODO: Move to .cpp
	int getPrice();
	int bookTicket();
	~tour();
};

#endif


#ifndef SAFARITOUR_H
#define SAFARITOUR_H
class safaritour: public tour
{
protected:
public:
	std::string getDescription();
};

#endif


#ifndef JUNGLETOUR_H
#define JUNGLETOUR_H
class jungletour: public tour
{
protected:
public:
	std::string getDescription();
};

#endif


#ifndef AQUARIUMTOUR_H
#define AQUARIUMTOUR_H
class aquariumtour: public tour
{
protected:
public:
	std::string getDescription();
};

#endif


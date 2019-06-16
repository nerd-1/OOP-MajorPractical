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
	std::string getDescription();
	int getPrice();
	bool getTicket();
	~tour() {};
};
#endif


#ifndef SAFARITOUR_H
#define SAFARITOUR_H
#include "tour.h"
class safaritour: public tour
{
public:
	std::string getDescription();
};
#endif


#ifndef JUNGLETOUR_H
#define JUNGLETOUR_H
#include "tour.h"
class jungletour: public tour
{
public:
	std::string getDescription();
};
#endif


#ifndef AQUARIUMTOUR_H
#define AQUARIUMTOUR_H
#include "tour.h"
class aquariumtour: public tour
{
private:
    int price = 60;
public:
	std::string getDescription();
	int getPrice();
};
#endif


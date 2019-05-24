#ifndef trinket_H
#define trinket_H
#include <iostream>

class trinket
{
protected:
    std::string description;
    int price = 10;
    int stock = 35;

public:
	trinket();
	std::string getDescription();
	int getPrice();
	int purchase();
	~trinket();
};

#ifndef PLUSHLION_H
#define PLUSHLION_H
class plushlion: public tour
{
public:
	std::string getDescription();
};

#ifndef MACAWKEYRING_H
#define MACAWKEYRING_H
class macawkeyring: public tour
{
public:
	std::string getDescription();
};

#endif

#ifndef STINGRAYGLOBE_H
#define STINGRAYGLOBE_H
class stingrayglobe: public tour
{
public:
	std::string getDescription();
	int getPrice();
};

#endif
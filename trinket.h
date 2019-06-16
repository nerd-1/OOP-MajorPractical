#ifndef TRINKET_H
#define TRINKET_H
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
	bool getTrinket();
	~trinket() {};
};
#endif


#ifndef PLUSHLION_H
#define PLUSHLION_H
#include "trinket.h"
class plushlion: public trinket
{
public:
    std::string getDescription();
};
#endif


#ifndef MACAWKEYRING_H
#define MACAWKEYRING_H
#include "trinket.h"
class macawkeyring: public trinket
{
public:
	std::string getDescription();
};
#endif


#ifndef STINGRAYGLOBE_H
#define STINGRAYGLOBE_H
#include "trinket.h"
class stingrayglobe: public trinket
{
public:
	std::string getDescription();
	int getPrice();
};
#endif

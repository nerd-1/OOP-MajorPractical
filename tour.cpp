//
// Created by user on 11/05/19.
//
#include "tour.h"

tour::tour() {

}

getPrice::tour() {
	return price;
}

getTicket::tour() {
	if (ticket > 0) {
		return true;
	}
	return false;
}

getDescription::safaritour() {
	std::string description("This tour shall present to you the wonders of African wildlife!");
	return description;
}


getDescription::safaritour() {
	std::string description("Here you shall experience exotic wildlife of the jungle!");
	return description;
}


getDescription::safaritour() {
	std::string description("Here you shall experience undersea life of the ocean!");
	return description;
}
//
// Created by user on 11/05/19.
//
#include "tour.h"

tour::tour() {

}

int tour::getPrice() {
	return price;
}

bool tour::getTicket() {
	if (ticket > 0) {
		ticket = ticket - 1;
		std::cout << "Update ticket: " << ticket << std::endl;
		return true;
	}
	return false;
}

std::string safaritour::getDescription() {
	std::string description("This tour shall present to you the wonders of African wildlife!");
	return description;
}


std::string jungletour::getDescription() {
	std::string description("Here you shall experience exotic wildlife of the jungle!");
	return description;
}


std::string aquariumtour::getDescription() {
	std::string description("Here you shall experience undersea life of the ocean!");
	return description;
}

int aquariumtour::getPrice() {
	return (price*2);
}
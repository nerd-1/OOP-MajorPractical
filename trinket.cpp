//
// Created by user on 11/05/19.
//
#include "trinket.h"

trinket::trinket() {

}

getPrice::trinket() {
	return price;
}

getTicket::trinket() {
	if (stock > 0) {
		return true;
		stock = stock - 1;
		std::cout << "Update stock: " << stock << std::endl;
	}
	return false;
}

getDescription::plushlion() {
	std::string description("If you want to cuddle, these soft lions are the ones to go for!");
	return description;
}

getDescription::macawkeyring() {
	std::string description("Remember your zoological adventure with these text based keyrings.");
	return description;
}

getDescription::stingray() {
	return (price * 3);
}

getDescription::stingray() {
	std::string description("Shake me and let the snow fall onto this aquatic dreamland.");
	return description;
}
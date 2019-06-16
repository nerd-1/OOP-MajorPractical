//
// Created by user on 11/05/19.
//
#include "trinket.h"

trinket::trinket() {

}

int trinket::getPrice() {
	return price;
}

bool trinket::getTrinket() {
	if (stock > 0) {
		stock = stock - 1;
		std::cout << stock << std::endl;
		return true;
	}
	return false;
}

std::string plushlion::getDescription() {
	std::string description("If you want to cuddle, these soft lions are the ones to go for!");
	return description;
}

std::string macawkeyring::getDescription() {
	std::string description("Remember your zoological adventure with these text based keyrings.");
	return description;
}

int stingrayglobe::getPrice() {
	return (price * 3);
}

std::string stingrayglobe::getDescription() {
	std::string description("Shake me and let the snow fall onto this aquatic dreamland.");
	return description;
}
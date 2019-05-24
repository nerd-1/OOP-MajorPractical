//
// Created by user on 11/05/19.
//
#include "animal.h"

animal::animal() {

}

feed::animal() {
	return false;
}

pet::animal() {
	return false;
}

getDescription::lion() {
	std::string description("Great shaggy mane of gold, giant paws padding soundlessly on the dusty mud, sleeping at noon in the sun-flecked shade of a sprawling tree, one paw resting on his broad muzzle, like a kitten dozing. Powerful muscles beneath fur of gold, sharp claws, mighty roar, king of the beasts.");
	return description;
}

getDescription::macaw() {
	std::string description("Many macaws have vibrant plumage. The coloring is suited to life in Central and South American rain forests, with their green canopies and colorful fruits and flowers.");
	return description;
}

getDescription::stingray() {
	std::string description("Stingrays are commonly found in the shallow coastal waters of temperate seas. They spend the majority of their time inactive, partially buried in sand, often moving only with the sway of the tide.");
	return description;
}
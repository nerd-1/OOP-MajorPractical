//g++ -std=c++17 -o exe animal.h animal.cpp trinket.h trinket.cpp tour.h tour.cpp main.cpp
#include "animal.h"
#include "tour.h"
#include "trinket.h"
#include <iostream>
#include <limits>
#include <vector>
#include <variant>
// Not using std namespace

int choose(int items) {
	int choice = 0;

	for (;;) {
		std::cin >> choice;
		if (std::cin.fail()) {
			std::cout << "Sorry, I don't understand that. Try entering the number of your choice." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;		
		}
		if (choice < 1 || choice > items) {
			std::cout << "Sorry, that's not an option." << std::endl;
			continue;
		}
		return choice;
	}
	// return 0;
}

int main() {
	safaritour safaritour;
	jungletour jungletour;
	aquariumtour aquariumtour;
	lion aLion;
	macaw aMacaw;
	stingray aStingray;
	plushlion aPlushlion;
	macawkeyring aMacawkeyring;
	stingrayglobe aStingrayglobe;

	std::cout << "Hello, welcome to the zoo!" << std::endl;
	std::cout << "We have three tours avaliable:\n" << std::endl;
	std::cout << "[1] The safari tour:\n" << safaritour.getDescription() << "\nPrice: " << safaritour.getPrice() << "\n" << std::endl;
	std::cout << "[2] The jungle tour:\n" << jungletour.getDescription() << "\nPrice: " << jungletour.getPrice() << "\n" << std::endl;
	std::cout << "[3] The aquarium tour:\n" << aquariumtour.getDescription() << "\nPrice: " << aquariumtour.getPrice() << "\n" << std::endl;
	std::cout << "Which tour would you like to go on?" << std::endl;

	int animalChoice = choose(3); // 3 is the number of options the user can choose from
	int choice = 0;

	//TODO: Refactor
	if (animalChoice == 1) {
		std::cout << "Great choice! First stop is the lion:" << std::endl;
		std::cout << "\nDo you want to:" << std::endl;
		std::cout << "[1] View description" << std::endl;
		std::cout << "[2] Feed it" << std::endl;
		std::cout << "[3] Pet it" << std::endl;
		std::cout << "[4] Move on" << std::endl;
		for (;;) {
			int choice = choose(4); // 4 is the number of options the user can choose from
			if (choice == 1) {
				std::cout << aLion.getDescription() << std::endl;
			} else if (choice == 2) {
				if (aLion.feedAnimal() == 0) {
    				std::cout << "Looks like you can't feed it." << std::endl;
		    	} else {
    				std::cout << "After a tennative approach, the creature seems to enjoy the snack." << std::endl;
		    	}
			} else if (choice == 3) {
				if (aLion.petAnimal() == 0) {
					std::cout << "Looks like you can't pet it." << std::endl;
	    		} else {
					std::cout << "The creature seems to enjoy the attention." << std::endl;
	    		}
			} else if (choice == 4) {
				break;
			}
		   	std::cout << "\nDo you want to:" << std::endl;
		   	std::cout << "[1] View description" << std::endl;
			std::cout << "[2] Feed it" << std::endl;
			std::cout << "[3] Pet it" << std::endl;
			std::cout << "[4] Move on" << std::endl;
		}
	} else if (animalChoice == 2) {
		std::cout << "Great choice! First stop is the macaw:" << std::endl;
	   	std::cout << "\nDo you want to:" << std::endl;
	   	std::cout << "[1] View description" << std::endl;
		std::cout << "[2] Feed it" << std::endl;
		std::cout << "[3] Pet it" << std::endl;
		std::cout << "[4] Move on" << std::endl;
		for (;;) {
			int choice = choose(4); // 4 is the number of options the user can choose from
			if (choice == 1) {
				std::cout << aMacaw.getDescription() << std::endl;
			} else if (choice == 2) {
				if (aMacaw.feedAnimal() == 0) {
    				std::cout << "Looks like you can't feed it." << std::endl;
		    	} else {
    				std::cout << "After a tennative approach, the creature seems to enjoy the snack." << std::endl;
		    	}
			} else if (choice == 3) {
				if (aMacaw.petAnimal() == 0) {
					std::cout << "Looks like you can't pet it." << std::endl;
	    		} else {
					std::cout << "The creature seems to enjoy the attention." << std::endl;
	    		}
			} else if (choice == 4) {
				break;
			}
		   	std::cout << "\nDo you want to:" << std::endl;
		   	std::cout << "[1] View description" << std::endl;
			std::cout << "[2] Feed it" << std::endl;
			std::cout << "[3] Pet it" << std::endl;
			std::cout << "[4] Move on" << std::endl;
		}
	} else if (animalChoice == 3) {
		std::cout << "Great choice! First stop is the stingray:" << std::endl;
	   	std::cout << "\nDo you want to:" << std::endl;
	   	std::cout << "[1] View description" << std::endl;
		std::cout << "[2] Feed it" << std::endl;
		std::cout << "[3] Pet it" << std::endl;
		std::cout << "[4] Move on" << std::endl;
		for (;;) {
			int choice = choose(4); // 4 is the number of options the user can choose from
			if (choice == 1) {
				std::cout << aStingray.getDescription() << std::endl;
			} else if (choice == 2) {
				if (aStingray.feedAnimal() == 0) {
    				std::cout << "Looks like you can't feed it." << std::endl;
		    	} else {
    				std::cout << "After a tennative approach, the creature seems to enjoy the snack." << std::endl;
		    	}
			} else if (choice == 3) {
				if (aStingray.petAnimal() == 0) {
					std::cout << "Looks like you can't pet it." << std::endl;
	    		} else {
					std::cout << "The creature seems to enjoy the attention." << std::endl;
	    		}
			} else if (choice == 4) {
				break;
			}
		   	std::cout << "\nDo you want to:" << std::endl;
		   	std::cout << "[1] View description" << std::endl;
			std::cout << "[2] Feed it" << std::endl;
			std::cout << "[3] Pet it" << std::endl;
			std::cout << "[4] Move on" << std::endl;
		}
	}

	std::cout << "\nOur final stop is the gift shop." << std::endl;
	std::cout << "There are three items for sale\n" << std::endl;
	std::cout << "[1] Plush lions:\n" << aPlushlion.getDescription() << "\nPrice: " << aPlushlion.getPrice() << "\n" << std::endl;
	std::cout << "[2] Macaw keyring:\n" << aMacawkeyring.getDescription() << "\nPrice: " << aMacawkeyring.getPrice() << "\n" << std::endl;
	std::cout << "[3] Stingray snowglobes:\n" << aStingrayglobe.getDescription() << "\nPrice: " << aStingrayglobe.getPrice() << "\n" << std::endl;
	std::cout << "[4] Move on\n" << std::endl;

	std::cout << "Would you like to purchase something?" << std::endl;

	int trinketChoice = choose(3); // 3 is the number of options the user can choose from



	if (trinketChoice == 1) {
		if (aPlushlion.getTrinket() == true) {
			std::cout << "You just purchased a plush lion." << std::endl;
		} else {
			std::cout << "Looks like we're out of stock." << std::endl;
		}
	} else if (trinketChoice == 2) {
		if (aMacawkeyring.getTrinket() == true) {
			std::cout << "You just purchased a macawkey ring." << std::endl;
		} else {
			std::cout << "Looks like we're out of stock." << std::endl;
		}
	} else if (trinketChoice == 3) {
		if (aStingrayglobe.getTrinket() == true) {
			std::cout << "You just purchased a stingray globe." << std::endl;
		} else {
			std::cout << "Looks like we're out of stock." << std::endl;
		}
	} else if (trinketChoice == 4) {
	}

	std::cout << "\nThanks for playing." << std::endl;

    return 0;
}

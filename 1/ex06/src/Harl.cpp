#include "Harl.hpp"

Harl::Harl() {
	responses[0] = &Harl::debug;
	responses[1] = &Harl::info;
	responses[2] = &Harl::warning;
	responses[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

int Harl::findLevel(std::string level) {
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			return i;
		}
	}
	return -1;
}

/*
loop over array of strings
if match found, call function on the same index
*/
void Harl::complain(std::string level) {
	for (char& c : level) {
		c = std::toupper(c);
	}
	int i = findLevel(level);
	if (i != -1) {
		(this->*responses[i])();
	}
}

void Harl::filteredPrint(int i) {
	for (int j = i; j < 4; j++) {
		std::cout << "[" << levels[j] << "]" << std::endl;
		(this->*responses[j])();
		std::cout << std::endl;
	}
}

void Harl::algo(std::string filter) {
	for (char& c : filter) {
		c = std::toupper(c);
	}
	int i = findLevel(filter);
	switch(i) {
		case 0:
			filteredPrint(0);
			break;
		case 1:
			filteredPrint(1);
			break;
		case 2:
			filteredPrint(2);
			break;
		case 3:
			filteredPrint(3);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl() {

}

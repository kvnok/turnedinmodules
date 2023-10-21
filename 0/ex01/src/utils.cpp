#include "PhoneBook.hpp"

/*
for handling ctrl-d which causes an infinite loop
so want to catch that and stop the program
*/
void check_if_eof() {
	if (std::cin.eof()) {
		printer(red, "EOF entered, exiting program");
		exit(0);
	}
}

void PhoneBook::debug_print() {
	//set size to the lowest one
	int size = (len < MAX_CONTACTS) ? len : MAX_CONTACTS;
	for (int i = 0; i < size; i++) {
		std::cout << magenta << "| " << i << " | ";
		std::cout << contacts[i].get_first_name() << " | ";
		std::cout << contacts[i].get_last_name() << " | ";
		std::cout << contacts[i].get_nickname() << " | ";
		std::cout << contacts[i].get_phone_number() << " | ";
		std::cout << contacts[i].get_darkest_secret() << " | ";
		std::cout << standard << std::endl;
	}
}

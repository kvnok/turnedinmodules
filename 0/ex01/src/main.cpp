#include "PhoneBook.hpp"

std::string command_input(std::string userinput) {
	printer(cyan, "PLEASE ENTER ONE OF THE FOLLOWING COMMANDS");
	printer(cyan, "* ADD : for saving a new contact");
	printer(cyan, "* SEARCH : for displaying a specific contact");
	printer(cyan, "* EXIT : close program");
	printer(cyan, "NOTE: closing the program will lose all saved contacts!");
	std::getline(std::cin, userinput);
	return userinput;
}

void command_execute(std::string userinput, PhoneBook &phonebook) {
	if (userinput == "ADD" || userinput == "add") {
		phonebook.ADD();;
	}
	else if (userinput == "SEARCH" || userinput == "search") {
		phonebook.SEARCH();
	}
	else if (userinput == "EXIT" || userinput == "exit") {
		exit(0);
	}
	// else if (userinput == "DEBUG" || userinput == "debug") {
	// 	phonebook.debug_print();
	// }
}

int main() {
	std::string userinput;
	PhoneBook phonebook(0);
	while(true) {
		userinput = command_input(userinput);
		check_if_eof();
		command_execute(userinput, phonebook);
		userinput = "";
	}
	return 0;
}

#include "PhoneBook.hpp"

/*
check if there is a none whitespace character in input
find_first_not_of finds the first character which doesnt consist of a whitespace
if no such character is found std::string::npos is returned
*/
bool whitespacer_checker(std::string str) {
	return str.find_first_not_of(" \t\n\v\f\r") == std::string::npos;
}

void ADD_INPUT_LOOP(std::string *str, std::string message) {
	printer(cyan, message);
	while (true) {
		std::getline(std::cin, *str);
		check_if_eof();
		if (whitespacer_checker(*str) == false)
			break;
		printer(red, "Input cannot be empty!");
	}
}

void ADD_HELPER(std::string *first_name, std::string *last_name, std::string *nickname,
	std::string *phone_number, std::string *darkest_secret) {
	ADD_INPUT_LOOP(first_name, "What is your first_name?");
	ADD_INPUT_LOOP(last_name, "What is your last_name?");
	ADD_INPUT_LOOP(nickname, "What is your nickname?");
	ADD_INPUT_LOOP(phone_number, "What is your phone_number?");
	ADD_INPUT_LOOP(darkest_secret, "What is your darkest_secret?");
}

/*
prompt to input information for a new contact
one field at a time
	first_name
	last_name
	nickname
	phone_number
	darkest_secret
a field cannot be empty
*/
void PhoneBook::ADD() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	ADD_HELPER(&first_name, &last_name, &nickname, &phone_number, &darkest_secret);
	//make new contact with gathered info
	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	// std::cout << "len : " << get_len() << std::endl;
	contacts[get_len() % MAX_CONTACTS] = new_contact;
	//increment index
	increment_len();
	printer(green, "Contact added!");
}

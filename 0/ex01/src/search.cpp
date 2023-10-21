#include "PhoneBook.hpp"
#include <iomanip>

void print_column(std::string str, std::string suffix) {
	if (str.length() > 10) {
		std::cout << str.substr(0, 9) << "." << suffix;
	}
	else {
		std::cout << std::setw(10) << std::setfill(' ') << str << suffix;
	}
}

void PhoneBook::pretty_print() {
	//set size to the lowest one
	int size = (len < MAX_CONTACTS) ? len : MAX_CONTACTS;
	for (int i = 0; i < size; i++) {
		//set max width of output to 10
		std::cout << std::setw(10) << std::setfill(' ') << i << "|";
		print_column(contacts[i].get_first_name(), "|");
		print_column(contacts[i].get_last_name(), "|");
		print_column(contacts[i].get_nickname(), "\n");
	}
}

/*
show all saved contacts as a 'list'
every row is a contact
every row has 4 columns: index, first name, last name, nickname
each column has to be 10 characters wide, with text right-aligned
if the entry is longer then 10 characters, display 9 chars and 10th char is a '.'
show a '|' between each column
if index is incorrect, display error message and ask again for index
*/
void PhoneBook::SEARCH() {
	std::string index;
	int size = (len < MAX_CONTACTS) ? len : MAX_CONTACTS;
	if (size == 0) {
		printer(yellow, "Contact list is empty");
		return ;
	}
	pretty_print();
	while(true) {
		printer(yellow, "Please enter the index of the contact you want to check out");
		std::getline(std::cin, index);
		check_if_eof();
		if (index.length() > 1 || index[0] < '0' || index[0] > (size - 1 + '0')) {
			printer(red, "Incorrect index");
			continue;
		}
		break;
	}
	printer(green, "Contact found!");
	int spot = index[0] - '0';
	printer(green, "index : ", spot);
	printer(green, "first_name : ", contacts[spot].get_first_name());
	printer(green, "last_name : ", contacts[spot].get_last_name());
	printer(green, "nickname : ", contacts[spot].get_nickname());
	printer(green, "phone_number : ", contacts[spot].get_phone_number());
	printer(green, "darkest_secret : ", contacts[spot].get_darkest_secret());
}

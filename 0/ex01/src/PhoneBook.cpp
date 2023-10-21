#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int size) {
	len = size;
};

int PhoneBook::get_len() {
	return len;
}

void PhoneBook::increment_len() {
	len++;
}

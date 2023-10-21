#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "printer.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

#define MAX_CONTACTS 8

class PhoneBook {
	public:
		PhoneBook(int size);
		int get_len();
		void increment_len();
		void ADD();
		void debug_print();
		void pretty_print();
		void SEARCH();
	private:
		Contact contacts[MAX_CONTACTS];
		int len;
};

void check_if_eof();

#endif

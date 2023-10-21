#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		std::string	getName();
		void announce(void);
		Zombie *getNext();
		void setNext(Zombie* next);
		~Zombie();
	private:
		std::string name;
		Zombie* next;
};

Zombie *zombieHorde(int N, std::string name);
void deallocation(Zombie *head);
void printing(Zombie *head);

#endif

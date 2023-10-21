#include "Zombie.hpp"

//default
Zombie::Zombie() : name(""), next(nullptr) {}

//normal
Zombie::Zombie(std::string name) : name(name), next(nullptr) {}

std::string Zombie::getName() {
	return this->name;
}

void Zombie::announce(void) {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::getNext() {
	return this->next;
}

void Zombie::setNext(Zombie* next) {
	this->next = next;
}

//destructor
Zombie::~Zombie() {
	std::cout << getName() << ": destroyed" << std::endl;
}

#include "Zombie.hpp"

//default
Zombie::Zombie() : name("") {}

//normal
Zombie::Zombie(std::string name) : name(name) {}

std::string Zombie::getName() {
	return this->name;
}

void Zombie::announce(void) {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//destructor
Zombie::~Zombie() {
	std::cout << getName() << ": destroyed" << std::endl;
}

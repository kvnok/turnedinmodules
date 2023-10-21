#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

std::string HumanA::getName() {
	return name; 
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}

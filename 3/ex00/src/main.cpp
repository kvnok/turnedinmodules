#include "ClapTrap.hpp"

void ClapTrapTests() {
	ClapTrap robotA("robotA");
	ClapTrap robotB("robotB");

	for (int i = 0; i < 12; i++) {
		robotA.attack("robotB");
	}
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	std::cout << robotB.getName() << ": hp = " << robotB.getHitPoints() << " energy = " << robotB.getEnergyPoints() << std::endl;
	robotA.beRepaired(123);
	robotB.beRepaired(456);
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	std::cout << robotB.getName() << ": hp = " << robotB.getHitPoints() << " energy = " << robotB.getEnergyPoints() << std::endl;
	robotA.takeDamage(1000);
	robotB.takeDamage(1000);
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	std::cout << robotB.getName() << ": hp = " << robotB.getHitPoints() << " energy = " << robotB.getEnergyPoints() << std::endl;
}

int main() {
	ClapTrapTests();
	return 0;
}

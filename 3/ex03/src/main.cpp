#include "DiamondTrap.hpp"

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

void ScavTrapTests() {
	ScavTrap robotA("robotA");
	robotA.attack("enemy");
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.takeDamage(10);
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	for (int i = 0; i < 50; i++) {
		robotA.beRepaired(1);
	}
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.guardGate();
}

void FragTrapTests() {
	FragTrap robotA("robotA");
	robotA.attack("enemy");
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.takeDamage(10);
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	for (int i = 0; i < 100; i++) {
		robotA.beRepaired(1);
	}
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.highFivesGuys();
}

void DiamondTrapTests() {
	DiamondTrap robotA("robotA");
	robotA.attack("enemy");
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.takeDamage(10);
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	for (int i = 0; i < 100; i++) {
		robotA.beRepaired(1);
	}
	std::cout << robotA.getName() << ": hp = " << robotA.getHitPoints() << " energy = " << robotA.getEnergyPoints() << std::endl;
	robotA.highFivesGuys();
	robotA.guardGate();
	robotA.whoAmI();
}

int main() {
	// ClapTrapTests();
	// ScavTrapTests();
	// FragTrapTests();
	DiamondTrapTests();
	return 0;
}

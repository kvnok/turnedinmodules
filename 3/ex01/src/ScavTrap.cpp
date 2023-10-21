#include "ScavTrap.hpp"

/*--------------------------Orthodox Canonical Form--------------------------*/
ScavTrap::ScavTrap() : ClapTrap("STdefault") {
	std::cout << "ScavTrap: " << "default constructor called" << std::endl;
	this->_name = "STdefault";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ScavTrap: " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap: " << this->_name << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;	
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: " << this->_name << " destructor called" << std::endl;
}

/*--------------------------the actual exercise--------------------------*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: " << this->_name << " constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0) {
		std::cout << "ScavTrap: " << this->_name << " has no hit points left!, cannot attack!" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ScavTrap: " << this->_name << " is out of energy!, cannot attack!" << std::endl;
	} else {
		std::cout << "ScavTrap: " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gatekeeper mode!" << std::endl;
}


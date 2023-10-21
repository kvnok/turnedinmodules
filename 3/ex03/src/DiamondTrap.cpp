#include "DiamondTrap.hpp"

/*--------------------------Orthodox Canonical Form--------------------------*/
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap: " << "default constructor called" << std::endl;
	this->_name = "DTdefault";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = ScavTrap::_attackDamage;
	ClapTrap::_name ="DTdefault_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	this->_name = other._name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = ScavTrap::_attackDamage;
	std::cout << "DiamondTrap: " << this->_name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap: " << this->_name << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = FragTrap::_hitPoints;
		this->_energyPoints = ScavTrap::_energyPoints;
		this->_attackDamage = ScavTrap::_attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap: " << this->_name << " destructor called" << std::endl;
}

/*--------------------------the actual exercise--------------------------*/
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = ScavTrap::_attackDamage;
	ClapTrap::_name = name+"_clap_name";
	std::cout << "DiamondTrap: " << this->_name << " constructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DT name: " << this->_name << ", CT name: " << ClapTrap::_name << std::endl;
}

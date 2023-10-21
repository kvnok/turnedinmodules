#include "FragTrap.hpp"

/*--------------------------Orthodox Canonical Form--------------------------*/
FragTrap::FragTrap() : ClapTrap("FTdefault") {
	std::cout << "FragTrap: " << "default constructor called" << std::endl;
	this->_name = "FTdefault";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "FragTrap: " << this->_name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap: " << this->_name << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;	
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: " << this->_name << " destructor called" << std::endl;
}

/*--------------------------the actual exercise--------------------------*/
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: " << this->_name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap: " << this->_name << " gives you a high five!" << std::endl;
}

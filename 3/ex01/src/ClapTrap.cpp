#include "ClapTrap.hpp"

/*--------------------------Orthodox Canonical Form--------------------------*/
ClapTrap::ClapTrap() {
	std::cout << "ClapTrap: " << "default constructor called" << std::endl;
	this->_name = "CTdefault";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "ClapTrap: " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap: " << this->_name << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;	
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: " << this->_name << " destructor called" << std::endl;
}

/*--------------------------the actual exercise--------------------------*/
ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: " << this->_name << " constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap: " << this->_name << " has no hit points left!, cannot attack!" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap: " << this->_name << " is out of energy!, cannot attack!" << std::endl;
	} else {
		std::cout << "ClapTrap: " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap: " << "is already defeated!" << std::endl;
	} else if (amount >= (unsigned int)(this->_hitPoints)) {
		std::cout << "ClapTrap: " << "takes " << amount << " damage!" << std::endl;
		this->_hitPoints = 0;
		this->_energyPoints = 0;
	} else {
		std::cout << "ClapTrap: " << "takes " << amount << " damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap: " << this->_name << " has no hit points left!, cannot repair!" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap: " << this->_name << " is out of energy!, cannot repair!" << std::endl;
	} else {
		std::cout << "ClapTrap: " << this->_name << " repairs " << amount << " hitpoints!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
}

/*--------------------------extra--------------------------*/
std::string ClapTrap::getName() {
	return this->_name;
}

int ClapTrap::getHitPoints() {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() {
	return this->_attackDamage;
}

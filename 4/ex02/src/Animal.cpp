#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: constructor called" << std::endl;
	this->type = "Generic animal";
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal: destructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

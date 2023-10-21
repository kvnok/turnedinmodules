#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog: copy constructor called" << std::endl;
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}

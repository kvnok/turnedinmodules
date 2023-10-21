#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog: copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	if (this->brain) {
		delete this->brain;
	}
	std::cout << "Dog: destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}

Brain *Dog::getBrain() {
	return this->brain;
}

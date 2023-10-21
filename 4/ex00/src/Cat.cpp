#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat: copy constructor called" << std::endl;
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}

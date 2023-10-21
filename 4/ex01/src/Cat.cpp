#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat: copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	if (this->brain) {
		delete this->brain;
	}
	std::cout << "Cat: destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}

Brain *Cat::getBrain() {
	return this->brain;
}

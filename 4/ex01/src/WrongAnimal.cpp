#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: constructor called" << std::endl;
	this->type = "Generic Wronganimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal: copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Generic Wronganimal noise" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

#include "Fixed.hpp"

//no need to add static
//static means it does not belong to any specific instance of the class
const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPointVal(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : fixedPointVal(other.fixedPointVal) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->fixedPointVal = other.fixedPointVal;
	}
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

//return data
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointVal;
}

//raw just means value not changed
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointVal = raw;
}

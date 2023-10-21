#include "Fixed.hpp"

//The 6 comparison operators: >, <, >=, <=, == and !=
bool Fixed::operator>(const Fixed &other) const {
	return this->fixedPointVal > other.fixedPointVal;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->fixedPointVal < other.fixedPointVal;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->fixedPointVal >= other.fixedPointVal;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->fixedPointVal <= other.fixedPointVal;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->fixedPointVal == other.fixedPointVal;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->fixedPointVal != other.fixedPointVal;
}

//The 4 arithmetic operators: +, -, *, and /
Fixed Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

//incrementing and decrementing, pre and post
Fixed Fixed::operator++(int) { //post
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int) { //post
	Fixed temp(*this);
	--(*this);
	return temp;
}

Fixed& Fixed::operator++() { //pre
	this->fixedPointVal += 1;
	return *this;
}

Fixed& Fixed::operator--() { //pre
	this->fixedPointVal -= 1;
	return *this;
}

//static member functions, with and without const
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b) {
		return a;
	}
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b) {
		return a;
	}
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b) {
		return a;
	}
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b) {
		return a;
	}
	return b;
}

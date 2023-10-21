#include "Fixed.hpp"

Fixed::Fixed(const int num) {
	fixedPointVal = num << fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	fixedPointVal = static_cast<int>(roundf(num * (1 << fractionalBits)));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const {
	return static_cast<float>(fixedPointVal) / (1 << fractionalBits);
}

int Fixed::toInt() const {
	return (fixedPointVal >> fractionalBits);
}

std::ostream& operator<< (std::ostream& out, const Fixed &instance) {
	out << instance.toFloat();
	return out;
}

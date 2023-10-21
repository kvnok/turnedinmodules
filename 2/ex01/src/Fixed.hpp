#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <ostream>

//debug
#include <bitset>
#include <cstdint>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		//01
		Fixed(const int num);
		Fixed(const float num);
		float toFloat() const;
		int toInt() const;

	private:
		int fixedPointVal;
		static const int fractionalBits;
};

//debug binary printing
void binaryPrintFloat(float num);
void binaryPrintInt(int num);

//01
std::ostream& operator<< (std::ostream& out, const Fixed &instance);

#endif

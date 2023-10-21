#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

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
	private:
		int fixedPointVal;
		static const int fractionalBits;
};

//debug binary printing
void binaryPrintFloat(float num);
void binaryPrintInt(int num);

#endif

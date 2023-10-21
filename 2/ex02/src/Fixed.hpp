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
		//02
		//The 6 comparison operators: >, <, >=, <=, == and !=
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		//The 4 arithmetic operators: +, -, *, and /
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		//incrementing and decrementing, pre and post
		Fixed operator++(int); //post
		Fixed operator--(int); //post
		Fixed& operator++(); //pre
		Fixed& operator--(); //pre
		//static member functions, with and without const
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
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

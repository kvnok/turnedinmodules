#include "Fixed.hpp"

void binaryPrintFloat(float num) {
	// create pointer to num's memory representation
	uint32_t* bin_rep = reinterpret_cast<uint32_t*>(&num);
	// extract bits and assign them to a 32 bit unsigned int
	uint32_t bits = *bin_rep;
	// convert bits to binary in string form
	std::bitset<32> binary(bits);
	// print param and binary
	std::cout << num << " :\n" << binary << std::endl;	
}

void binaryPrintInt(int num) {
	//bitset with amount of bits this integer can hold
	std::bitset<sizeof(int) * 8> numBits(num);
	//print param and binary
	std::cout << num << " :\n" << numBits << std::endl;
}


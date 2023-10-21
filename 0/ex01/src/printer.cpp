#include "printer.hpp"

void printer(std::string color, std::string message) {
	std::cout << color << message << standard << std::endl;
}

void printer(std::string color, std::string message, std::string extra) {
	std::cout << color << message << extra << standard << std::endl;
}

void printer(std::string color, std::string message, int n) {
	std::cout << color << message << n << standard << std::endl;
}
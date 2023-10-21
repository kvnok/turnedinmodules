#include <iostream>
#include <string>
#include <stdexcept>

void testing() {
	std::string string = "ok";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "memory addresses" << std::endl;
	std::cout << &string << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << "values" << std::endl;
	std::cout << string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

int main() {
	testing();
	return 0;
}

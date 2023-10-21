#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <LEVEL>" << std::endl;
		std::cerr << "Available levelfilters:" << std::endl;
		std::cerr << "DEBUG" << std::endl;
		std::cerr << "INFO" << std::endl;
		std::cerr << "WARNING" << std::endl;
		std::cerr << "ERROR" << std::endl;
		return 1;
	}
	Harl harl;
	harl.algo(argv[1]);
	return 0;
}

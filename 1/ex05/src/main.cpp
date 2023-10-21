#include "Harl.hpp"

int main() {
	Harl harl;
	harl.complain("DeBuG");
	harl.complain("info");
	harl.complain("WARNING");
	harl.complain("Error");
	harl.complain("random");
	harl.complain("");
	return 0;
}

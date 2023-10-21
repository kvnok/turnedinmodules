#include "Zombie.hpp"

int main() {
	Zombie *one = newZombie("one");
	one->announce();
	delete one;
	Zombie two("two");
	Zombie three("three");
	randomChump("four");
	randomChump("five");
	return 0;
}

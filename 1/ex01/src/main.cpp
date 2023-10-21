#include "Zombie.hpp"

void testing() {
	Zombie *head = zombieHorde(5, "first");
	printing(head);
	deallocation(head);
	head = zombieHorde(0, "second");
	printing(head);
	deallocation(head);
	head = zombieHorde(1, "third");
	printing(head);
	deallocation(head);
}

int main() {
	testing();
	return 0;
}

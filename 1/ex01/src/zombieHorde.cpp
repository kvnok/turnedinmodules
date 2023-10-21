#include "Zombie.hpp"

void printing(Zombie *head) {
	Zombie *cur = head;
	while(cur != nullptr) {
		std::cout << cur->getName() << std::endl;
		cur = cur->getNext();
	}
	std::cout << std::endl;
}

void deallocation(Zombie *head) {
	while(head != nullptr) {
		Zombie *next_zombie = head->getNext();
		delete head;
		head = next_zombie;
	}
}

/*
try and catch to find any malloc fails
using nullptr to check if pointing to invalid object or memory address
looping until N to malloc and link the zombies to the leader
*/
Zombie *zombieHorde(int N, std::string name) {
	Zombie *head = nullptr;
	Zombie *cur = nullptr;

	try {
		if (N < 1) {
			return nullptr;
		}
		head = new Zombie(name);
		cur = head;
		//start from 1 because, the head already exists
		for (int i = 1; i < N; i++) {
			Zombie *newZombie = new Zombie(name);
			cur->setNext(newZombie);
			cur = newZombie;
		}
	} catch(const std::bad_alloc& error) {
		std::cerr << "Zombie allocation fail: " << error.what() << std::endl;
		deallocation(head);
		return nullptr;
	}
	return head;
}

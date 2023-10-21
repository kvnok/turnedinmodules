#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void subjectTests() {
	std::cout << "TESTS FROM SUBJECT:" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void destructorTests() {
	std::cout << "\nTESTING DESTRUCTORS:" << std::endl;
	Animal *animals[10];
	for (int i = 0; i < 5; i++) {
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10; i++) {
		animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
}

void copyTests() {
	std::cout << "\nTESTING COPYING:" << std::endl;
	Cat *cat = new Cat();
	Cat *copyCat = new Cat(*cat);
	std::cout << "copyCat brain: " << copyCat->getBrain() << std::endl;
	delete copyCat;
	std::cout << "cat brain: " << cat->getBrain() << std::endl;
	delete cat;
}

void assignmentTests() {
	std::cout << "\nTESTING COPY ASSIGNMENT:" << std::endl;
	Dog *labrador = new Dog();
	Dog *husky = new Dog();
	*labrador = *husky;
	std::cout << "husky brain: " << husky->getBrain() << std::endl;
	delete husky;
	std::cout << "labrador brain: " << labrador->getBrain() << std::endl;
	if (labrador) {
		delete labrador;
	}
}

int main() {
	subjectTests();
	destructorTests();
	copyTests();
	assignmentTests();
	return 0;
}

/*
check leaks: make check
*/

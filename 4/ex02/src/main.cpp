#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void basicTests() {
	std::cout << "TESTING BASICS AGAIN:" << std::endl;
	Dog *dog = new Dog();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	delete dog;
	Cat *cat = new Cat();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;
}

void copyTests() {
	std::cout << "\nTESTING A COPY:" << std::endl;
	Cat *cat = new Cat();
	Cat *copyCat = new Cat(*cat);
	std::cout << copyCat->getType() << std::endl;
	copyCat->makeSound();
	delete copyCat;
	delete cat;
}

int main() {
	basicTests();
	copyTests();
	// Animal *animal = new Animal();
	//	^would give compiler error
	return 0;
}

/*
check leaks: make check
*/

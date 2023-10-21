#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void subjectTests() {
	std::cout << "TESTS FROM SUBJECT:" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	//have to free everything to not have leaks
	delete j;
	delete i;
	delete meta;
}

void wrongTests() {
	std::cout << "\nTESTING WRONG VERSIONS:" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	//have to free everything to not have leaks
	delete wrongCat;
	delete wrongAnimal;
}

int main() {
	subjectTests();
	wrongTests();
	return 0;
}

/*
check leaks: make check
*/

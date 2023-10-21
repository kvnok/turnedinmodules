#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: constructor called" << std::endl;
	for (int i = 0; i < ideasNum; i++) {
		this->ideas[i] = "none";
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain: copy assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < ideasNum; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain: destructor called" << std::endl;
}

std::string Brain::getIdea(int index) {
	if (index >= 0 && index <= 99) {
		return ideas[index];
	}
	return "out of bounds";
}

void Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index <= 99) {
		ideas[index] = idea;
	}
}

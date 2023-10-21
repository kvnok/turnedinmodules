#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#define ideasNum 100

class Brain {
	private:
		std::string ideas[ideasNum];
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string getIdea(int index);
		void setIdea(int index, std::string idea);
};

#endif

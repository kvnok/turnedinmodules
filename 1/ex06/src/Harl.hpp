#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Harl {
	public:
		Harl();
		int findLevel(std::string);
		void complain(std::string level);
		void filteredPrint(int i);
		void algo(std::string filter);
		~Harl();
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*responses[4])(void);
		std::string levels[4];
};

#endif

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return 0;
	}
	std::string str = "";
	for (int i = 1; i < argc; i++) {
		str += argv[i];
	}
	for (std::string::iterator i = str.begin(); i != str.end(); i++) {
		if (std::islower(*i)) {
			*i = std::toupper(*i);
		}
	}
	std::cout << str << std::endl;
	return 0;
}

/*
./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
*/
